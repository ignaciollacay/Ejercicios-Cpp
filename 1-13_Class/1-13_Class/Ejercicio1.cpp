#include<iostream>

using namespace std;

class Empleado {
private:
	char nombre[40];
	int sueldo;
public:
	void CargarDatos();
	void ImprimirDatos();
	void Impuestos();
};

void Empleado::CargarDatos()
{
	cout << "Ingrese el nombre del empleado: ";
	cin >> nombre;
	cout << "Ingrese el sueldo del empleado: ";
	cin >> sueldo;
}

void Empleado::ImprimirDatos()
{
	cout << "Nombre: ";
	cout << nombre;
	cout << "\n";
	cout << "Sueldo: ";
	cout << sueldo;
}

void Empleado::Impuestos()
{
	if (sueldo > 3000)
	{
		cout << "Debe pagar impuestos";
	}
}

//int main()
//{
//	Empleado empleado1;
//	empleado1.CargarDatos();
//	empleado1.ImprimirDatos();
//	empleado1.Impuestos();
//	return 0;
//}