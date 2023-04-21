#include <iostream>

using namespace std;

class CalcularMayor
{
private:
	int Calcular(int num1, int num2);
public:
	void Cargar();
};

void CalcularMayor::Cargar()
{
	int num1, num2;
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;

	int mayor;
	mayor = Calcular(num1, num2);
	cout << "Es mayor ";
}
int CalcularMayor::Calcular(int num1, int num2)
{
	if (num1 > num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}

int main()
{
	CalcularMayor calcularMayor;
	calcularMayor.Cargar();
	return 0;
}