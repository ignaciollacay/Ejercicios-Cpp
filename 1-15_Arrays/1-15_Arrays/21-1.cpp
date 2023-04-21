#include<iostream>

using namespace std;

class MatrizParalela
{
public:
	char pais[4][20];
	int temp[4][3];
	int tempMedia[4];

	void Cargar();
	void Promedio();
	void ImprimirMensual();
	void ImprimirTrimestral();
	void Mayor();
};

void MatrizParalela::Cargar()
{
	cout << "Ingrese el nombre y las temperaturas de cada pais." <<"\n";
	for (int i = 0; i < 4; i++)
	{
		cout << "Nombre: ";
		cin.getline(pais[i], 20);

		for (int j = 0; j < 3; j++)
		{
			cout << "Mes "<<j <<": ";
			cin >> temp[i][j];
		}
		cin.get();
	}
}

void MatrizParalela::Promedio()
{
	
	for (int j = 0; j < 4; j++)
	{
		int suma = 0;
		for (int i = 0; i < 3; i++)
		{
			suma += temp[j][i];
		}
		tempMedia[j] = suma / 3;
	}
}

void MatrizParalela::ImprimirMensual()
{
	cout << "Temperatura Media Mensual" << "\n";

	for (int i = 0; i < 4; i++)
	{
		cout << "Pais: " << pais[i] << ". ";
		cout << "Temperatura mensual: ";
		for (int j = 0; j < 3; j++)
		{
			cout << "Mes " << j << ": " << temp[i][j] << " - ";
		}
		cout << "\n";
	}
	cout << "\n";
}

void MatrizParalela::ImprimirTrimestral()
{
	cout << "Temperatura Media Trimestral" <<"\n";
	for (int i = 0; i < 4; i++)
	{
		cout << "Pais: " << pais[i] << ". ";
		cout << "Temperatura Media Trimestral: " << tempMedia[i] <<"\n";
	}
}
void MatrizParalela::Mayor()
{
	int pos = 0;
	for (int i = 0; i < 4; i++)
	{
		if (tempMedia[i] > tempMedia[pos])
		{
			pos = i;
		}
	}
	cout << "El pais con mayor temperatura media trimestral es " << pais[pos];
	cout << " con Temperatura Media Trimestral de " << tempMedia[pos];
}

int main()
{
	MatrizParalela mp;
	mp.Cargar();
	mp.ImprimirMensual();
	mp.Promedio();
	mp.ImprimirTrimestral();
	mp.Mayor();
	return 0;
}

