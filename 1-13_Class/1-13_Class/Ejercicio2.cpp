#include<iostream>

using namespace std;

class Operaciones {
private:
	int num1, num2;
public:
	void CargarDatos();
	void Suma();
	void Resta();
	void Multiplicacion();
	void Division();
};

void Operaciones::CargarDatos()
{
	cout << "Ingrese el primer valor: ";
	cin >> num1;
	cout << "Ingrese el segundo valor: ";
	cin >> num2;
}
void Operaciones::Suma()
{
	int suma = num1 + num2;
	cout << "La suma de los valores es: ";
	cout << suma;
	cout << "\n";
}
void Operaciones::Resta()
{
	int resta = num1 - num2;
	cout << "La resta de los valores es: ";
	cout << resta;
	cout << "\n";
}
void Operaciones::Multiplicacion()
{
	int multiplicacion = num1 * num2;
	cout << "La multiplicacion de los valores es: ";
	cout << multiplicacion;
	cout << "\n";
}
void Operaciones::Division()
{
	float division = num1 / num2;
	cout << "La division de los valores es: ";
	cout << division;
	cout << "\n";
}

int main() 
{
	Operaciones operaciones;
	operaciones.CargarDatos();
	operaciones.Suma();
	operaciones.Resta();
	operaciones.Multiplicacion();
	operaciones.Division();
	return 0;
}