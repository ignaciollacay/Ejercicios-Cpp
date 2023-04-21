#include<iostream>

using namespace std;

class VectorParaleloOrden
{
	char paises[5][40];
	int habitantes[5];
public:
	void Cargar();
	void ImprimirPaises();
	void ImprimirHabitantes();
	void MenorMayorChar();
	void MayorMenorInt();
};

void VectorParaleloOrden::Cargar()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Ingrese el nombre del pais: ";
		cin.getline(paises[i], 40);
		cout << "Ingrese la cantidad de habitantes: ";
		cin >> habitantes[i];
		cin.get();
	}
}

void VectorParaleloOrden::ImprimirPaises()
{
	cout << "Paises: ";
	for (int i = 0; i < 5; i++)
	{
		cout << paises[i] << " - ";
	}
	cout << "\n";
}
void VectorParaleloOrden::ImprimirHabitantes()
{
	cout << "Habitantes: ";
	for (int i = 0; i < 5; i++)
	{
		cout << habitantes[i] << " - ";
	}
	cout << "\n";
}

void VectorParaleloOrden::MenorMayorChar()
{
	for (int j = 0; j < 5 - 1; j++)
	{
		for (int i = 0; i < 5-1-j; i++)
		{
			if (strcmp(paises[i], paises[i + 1]) > 0)
			{
				char auxChar[40];
				strcpy_s(auxChar, 40, paises[i]);
				strcpy_s(paises[i], 40, paises[i + 1]);
				strcpy_s(paises[i + 1], 40, auxChar);

				int auxInt = habitantes[i];
				habitantes[i] = habitantes[i + 1];
				habitantes[i + 1] = auxInt;
			}
			cout << paises[i] << " - ";
		}
	}
	cout << "Orden Alfabetico Paises \n";
}

void VectorParaleloOrden::MayorMenorInt()
{
	for (int j = 0; j < 5 - 1; j++)
	{
		for (int i = 0; i < 5-1-j; i++)
		{
			if (habitantes[i] < habitantes[i + 1])
			{
				int auxInt = habitantes[i];
				habitantes[i] = habitantes[i + 1];
				habitantes[i + 1] = auxInt;

				char auxChar[40];
				strcpy_s(auxChar, 40, paises[i]);
				strcpy_s(paises[i], 40, paises[i + 1]);
				strcpy_s(paises[i + 1], 40, auxChar);
			}
		}
	}
	cout << "Orden Mayor a menor habitantes \n";
}


//int main()
//{
//	VectorParaleloOrden vpo;
//	vpo.Cargar();
//	vpo.MenorMayorChar();
//	vpo.ImprimirPaises();
//	vpo.ImprimirHabitantes();
//	vpo.MayorMenorInt();
//	vpo.ImprimirPaises();
//	vpo.ImprimirHabitantes();
//	return 0;
//}
