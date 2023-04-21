#include<iostream>

using namespace std;

class Vector4
{
private:
	int vector1[10];
public:
	void CrearVector();
	void VerificarOrdenMenorAMayor();
};

void Vector4::CrearVector()
{
	cout << "Ingrese los valores del vector: \n";
	for (int i = 0; i < 10; i++)
	{
		cout << i;
		cout << ": ";
		cin >> vector1[i];
	}
}
void Vector4::VerificarOrdenMenorAMayor()
{
	for (int i = 0; i < 10; i++)
	{
		int j = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (vector1[i] > vector1[j])
			{
				cout << "El vector no esta ordenado de mayor a menor \n";
				cout << vector1[j];
				cout << " es mayor que ";
				cout << vector1[i];
				return;
			}
		}
	}
	cout << "El vector esta ordenado de mayor a menor";
}
//int main()
//{
//	Vector4 vector4;
//	vector4.CrearVector();
//	vector4.VerificarOrdenMenorAMayor();
//	return 0;
//}