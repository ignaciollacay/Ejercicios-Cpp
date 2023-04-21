#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Vector5MayorMenor
{
	int vector[5];
	void MayorMenor();
	void Imprimir();
public:
	Vector5MayorMenor();
};

void Vector5MayorMenor::MayorMenor()
{
	for (int i = 0; i < 5-1; i++)
	{
		if (vector[i] < vector[i + 1])
		{
			int aux = vector[i];
			vector[i] = vector[i + 1];
			vector[i + 1] = aux;
		}
	}
}

void Vector5MayorMenor::Imprimir()
{
	for (int i = 0; i < 5; i++)
	{
		cout << vector[i] << " - ";
	}
}

Vector5MayorMenor::Vector5MayorMenor()
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		vector[i] = rand() % 11;
	}
	cout << "Vector aleatorio: \n";
	Imprimir();
	MayorMenor();
	cout << "\nEl menor valor es " << vector[4] << "\n";
	cout << "El mayor valor es " << vector[0];
}

int main()
{
	Vector5MayorMenor v;
	return 0;
}