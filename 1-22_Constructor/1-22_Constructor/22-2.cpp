#include<iostream>

using namespace std;

class Operaciones
{
public:
	Operaciones();
	void Suma();
	void Resta();
	void Mult();
	void Div();
private:
	int num1, num2;
};

Operaciones::Operaciones()
{
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
}

void Operaciones::Suma()
{
	int suma = num1 + num2;
	cout << "La suma de los valores es: " << suma << "\n";
}

void Operaciones::Resta()
{
	int resta = num1 - num2;
	cout << "La resta de los valores es: " << resta << "\n";
}

void Operaciones::Mult()
{
	int mult = num1 * num2;
	cout << "La multiplicacion de los valores es: " << mult << "\n";
}

void Operaciones::Div()
{
	float _num1 = num1, _num2 = num2;
	float div = _num1 / _num2;
	cout << "La division de los valores es: " << div << "\n";
}

int main()
{
	Operaciones op;
	op.Suma();
	op.Resta();
	op.Mult();
	op.Div();
	return 0;
}