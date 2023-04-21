#include<iostream>
using namespace std;

class Persona
{
public:
	Persona();
	void Imprimir();
private:
	char nombre[40];
	int edad;
};

class Empleado: public Persona
{
public:
	Empleado();
	void ImprimirSueldo();
private: 
	int sueldo;
};

Persona::Persona()
{
	cout << "Nombre: ";
	cin.getline(nombre, 40);
	cout << "Edad: ";
	cin >> edad;
	cin.get();
}

void Persona::Imprimir()
{
	cout << "Nombre: " << nombre << "\n";
	cout << "Edad: " << edad << "\n";
	cin.get();
}

Empleado::Empleado()
{
	cout << "Sueldo: ";
	cin >> sueldo; 
}

void Empleado::ImprimirSueldo()
{
	cout << "Sueldo: " << sueldo;
}

int main()
{
	Persona persona;
	persona.Imprimir();

	Empleado empleado;
	empleado.Imprimir();
	empleado.ImprimirSueldo();

	return 0;
}