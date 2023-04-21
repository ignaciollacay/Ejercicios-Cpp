#include <iostream>
#include <string>

using namespace std;

class Fecha
{
public:
	Fecha(int ano, int mes, int dia, int hora);
	void Imprimir();
	bool Validar();
private:
	int ano, mes, dia, hora;
};
Fecha::Fecha(int ano, int mes, int dia, int hora)
{
	this->ano = ano;
	this->mes = mes;
	this->dia = dia;
	this->hora = hora;
}

void Fecha::Imprimir()
{
	cout << ano << "/" << mes << "/" << dia << " " << hora << "hs";
}

bool Fecha::Validar()
{
	bool valida = true;
	int maxFeb;
	if (ano % 4 == 0) // bisiesto
		maxFeb = 28;
	else
		maxFeb = 29;

	// Validar mes
	if (mes <= 12 && mes > 0)
	{
		// Validar dia
		if (dia > 0)
		{
			if (mes == 2) // febrero
			{
				if (dia > maxFeb)
					valida = false;
			}
			else if (mes % 2 == 0) // mes par
			{
				if (dia > 30)
					valida = false;
			}
			else // mes impar
			{
				if (dia > 31)
					valida = false;
			}
		}
	}
	else
		valida = false;

	// Validar hora
	if (hora > 24 && hora < 0)
		valida = false;

	return valida;
}
class Cita
{
public:
	Cita();
	Cita(string m1, string m2, string l, int ano, int mes, int dia, int hora);
	void Imprimir();
	friend class ClaseExterna;
private:
	string miembro1, miembro2;
	string lugar;
	Fecha fecha = Fecha(-1, -1, -1, -1);
};
Cita::Cita()
{

}
Cita::Cita(string m1, string m2, string l, int ano, int mes, int dia, int hora)
{
	miembro1 = m1;
	miembro2 = m2;
	lugar = l;
	fecha = Fecha(ano, mes, dia, hora);
}

void Cita::Imprimir()
{
	cout << "Cita de " << miembro1 << " y " << miembro2 << " en " << lugar << ". Fecha ";
	fecha.Imprimir();
}


class ClaseExterna
{
public:
	ClaseExterna();
	void CrearCita(string m1, string m2, string l, int ano, int mes, int dia, int hora);
	void ConsultarCita(int pos);
private:
	int cant = 0;
	Cita citas[10];
};

ClaseExterna::ClaseExterna()
{

}

void ClaseExterna::CrearCita(string m1, string m2, string l, int ano, int mes, int dia, int hora)
{
	Fecha fecha = Fecha(ano, mes, dia, hora);
	
	if (cant < 10 && fecha.Validar())
	{
		Cita nueva = Cita(m1, m2, l, ano, mes, dia, hora);
		citas[cant] = nueva;
		cant++;
	}
	else {
		cout << "No se pudo crear la cita\n";
	}
}

void ClaseExterna::ConsultarCita(int pos)
{
	if (pos <= cant)
	{
		citas[pos].Imprimir();
	}
	else
	{
		cout << "No se pudo consultar la cita\n";
	}
}

int main()
{
	ClaseExterna ce = ClaseExterna();
	//ce.CrearCita("igna", "magu", "croque madam", 2023, 4, 16, 16);
	ce.CrearCita("igna", "juls", "palacio paz", 2022, 13, 29, 0);
	ce.ConsultarCita(0);

	return 0;
}