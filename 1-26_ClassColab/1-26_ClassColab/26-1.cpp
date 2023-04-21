#include<iostream>
using namespace std;

class Socio
{
	int antiguedad;
	char nombre[40];
public:
	Socio();
	int GetAntiguedad();
	void ImprimirNombre();
};

Socio::Socio()
{
	cout << "Nombre del socio: ";
	cin.getline(nombre,40);
	cout << "Antiguedad del socio: ";
	cin >> antiguedad;
}

int Socio::GetAntiguedad()
{
	return antiguedad;
}
void Socio::ImprimirNombre()
{
	cout << nombre;
}
class Club
{
public:
	void MayorEdad();
private:
	Socio socios[3];
};

void Club::MayorEdad()
{
	int mayor = 0;
	for (int i = 1; i < 3; i++)
	{
		if (socios[i].GetAntiguedad() > socios[mayor].GetAntiguedad())
		{
			mayor = i;
		}
	}
	cout << "El socio con mayor antiguedad es ";
	socios[mayor].ImprimirNombre();
}
int main()
{
	Club club;
	club.MayorEdad();
	return 0;
}