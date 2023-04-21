#include<iostream>

using namespace std;

class VectorParalelo3
{
private:
	int numeros[5];
public:
	void Crear();
	int BuscarMenor();
	void BuscarIgualA(int x);
};

void VectorParalelo3::Crear()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Ingrese el numero: ";
		cin >> numeros[i];
	}
}

int VectorParalelo3::BuscarMenor()
{
	int menor = numeros[0];
	int posicionMenor = 0;
	for (int i = 1; i < 5; i++)
	{
		if (numeros[i] < menor)
		{
			menor = numeros[i];
			posicionMenor = i;
		}
	}
	cout << "El menor numero es ";
	cout << numeros[posicionMenor];
	return posicionMenor;
}

void VectorParalelo3::BuscarIgualA(int x)
{
	int repeticiones = 0;
	for (int i = 0; i < 5; i++)
	{
		if (i != x && numeros[i] == numeros[x])
		{
			repeticiones++;
		}
	}
	if (repeticiones > 0)
	{
		cout << "Cantidad de repeticiones: ";
		cout << repeticiones;
	}
	else
	{
		cout << "El menor valor no se repite.";
	}
	
}

//int main()
//{
//	VectorParalelo3 vectorParalelo3;
//	vectorParalelo3.Crear();
//	int x = vectorParalelo3.BuscarMenor();
//	vectorParalelo3.BuscarIgualA(x);
//	return 0;
//}
