#include<iostream>
using namespace std;

class VectoresDinamicos
{
public:
	VectoresDinamicos();
	~VectoresDinamicos();
	void Imprimir();
private:
	int arrayLength;
	int* pe;
};

VectoresDinamicos::VectoresDinamicos()
{
	cout << "Ingrese la cantidad de componentes del vector: ";
	cin >> arrayLength;

	pe = new int[arrayLength];

	cout << "Ingrese los valores de los componentes del vector: \n";

	for (int i = 0; i < arrayLength; i++)
	{
		cin >> pe[i];
	}
	cout << "\n";
}

VectoresDinamicos::~VectoresDinamicos()
{
	cout << "Responsabilidad terminada. Auto destruccion.";
	delete[]pe;
}

void VectoresDinamicos::Imprimir()
{
	cout << "Ha creado el siguiente vector: \n";
	for (int i = 0; i < arrayLength; i++)
	{
		cout << *pe << " - ";
		pe++;
	}
	cout << "\n";
}

int main()
{
	VectoresDinamicos vd;
	vd.Imprimir();
	return 0;
}