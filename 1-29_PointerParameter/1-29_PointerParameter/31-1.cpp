#include<iostream>
using namespace std;

class AdministradorVectores
{
public:
	void CargarVector();
	void ImprimirComponentes();
	void IncrementarInt();
private:
	int vector[5];
	int num = 4;
	int num2 = 5;
};

void AdministradorVectores::CargarVector()
{
	int* pe;
	pe = vector;
	for (int i = 0; i < 5; i++)
	{
		cin >> *pe;
		pe++;
	}
	cout << "\n";
}

void AdministradorVectores::ImprimirComponentes()
{
	int* pe;
	pe = vector;
	for (int i = 0; i < 5; i++)
	{
		cout << *pe << "\n";
		pe++;
	}
}

void AdministradorVectores::IncrementarInt()
{
	int* pe;
	pe = &num;
	cout << *pe << "\n";
	pe++;
	cout << *pe;
}

//int main()
//{
//	AdministradorVectores av;
//	//av.IncrementarInt();
//	av.CargarVector();
//	av.ImprimirComponentes();
//}