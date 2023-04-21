#include <iostream>

using namespace std;

class Sumatoria
{
public:
	Sumatoria();
	~Sumatoria();

private:
	int suma = 0;
};

Sumatoria::Sumatoria()
{
	int numero;
	do
	{
		cout << "Ingrese un numero: ";
		cin >> numero;
		suma += numero;
		cout << "Numero cargado. Ingrese 0 para finalizar." << "\n";
	} while (numero != 0);
}

Sumatoria::~Sumatoria()
{
	cout << "La suma de los valores ingresados es " << suma;
}

int main()
{
	Sumatoria sumatoria;
	return 0;
}