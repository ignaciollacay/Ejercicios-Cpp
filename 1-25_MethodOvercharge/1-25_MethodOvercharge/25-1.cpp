#include<iostream>
using namespace std;

class Overcharge1
{
	int vector[5];
public:
	Overcharge1();
	void Imprimir();
	void Imprimir(int hasta);
	void Imprimir(int desde, int hasta);
};

Overcharge1::Overcharge1()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> vector[i];
	}
}

void Overcharge1::Imprimir()
{
	Imprimir(0, 5);
}

void Overcharge1::Imprimir(int hasta)
{
	Imprimir(0, hasta);
}

void Overcharge1::Imprimir(int desde, int hasta)
{
	cout << "Imprimir desde " << desde << " hasta " << hasta << ": ";
	for (int i = desde; i < hasta; i++)
	{
		cout << vector[i] << " - ";
	}
	cout << "\n";
}

//int main()
//{
//	Overcharge1 o;
//	o.Imprimir();
//	o.Imprimir(2);
//	o.Imprimir(1, 3);
//}