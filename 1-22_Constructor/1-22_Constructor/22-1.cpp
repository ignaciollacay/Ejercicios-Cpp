#include<iostream>

using namespace std;

class Empleado
{
public:
	Empleado();
	void Imprimir();
	void Impuestos();
private:
	char nombre[40];
	int sueldo;
};

Empleado::Empleado()
{
	cout << "Nombre: ";
	cin.getline(nombre, 40);
	cout << "Sueldo: ";
	cin >> sueldo;
}

void Empleado::Imprimir()
{
	cout <<"Nombre: " << nombre << " - Sueldo: " << sueldo <<"\n";
}

void Empleado::Impuestos()
{
	if (sueldo > 3000)
		cout << nombre << " debe pagar impuestos.";
}

//int main()
//{
//	Empleado empleado;
//	empleado.Imprimir();
//	empleado.Impuestos();
//	return 0;
//}