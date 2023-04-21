#include <iostream>

using namespace std;

class Vector5Enteros
{
public:
	Vector5Enteros();
	~Vector5Enteros();
	void Imprimir();
	int SumaPrimeroUltimo()
	{
		int suma = v[0] + v[4];
		return suma;
	}
private:
	int v[5];
};

Vector5Enteros::Vector5Enteros()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Vector " << i << ": ";
		cin >> v[i];
	}
}

Vector5Enteros::~Vector5Enteros()
{
}

void Vector5Enteros::Imprimir()
{
	cout << "(";
	for (int i = 0; i < 5; i++)
	{
		cout << v[i];
		if (i < 4)
			cout << ", ";
	}
	cout << ")" << "\n";
}

int main()
{
	Vector5Enteros vector5Enteros1 = Vector5Enteros();
	cout << "Imprimir vector: ";
	vector5Enteros1.Imprimir();
	cout << "Suma del primer y ultimo valor: " << vector5Enteros1.SumaPrimeroUltimo();
	return 0;
}
