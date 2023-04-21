#include<iostream>
using namespace std;

class Matriz
{
public:
	Matriz();
	void Imprimir();
	void Imprimir(int fila, int columna);
	void EncontrarMayor(int* pmF, int* pmC);
private:
	int matriz[3][3];
};

Matriz::Matriz()
{
	cout << "Cargue los valores de la matriz \n";
	for (int f = 0; f < 3; f++)
	{
		for (int c = 0; c < 3; c++)
		{
			cout << "Fila " << f << ", Columna " << c << ": ";
			cin >> matriz[f][c];
		}
	}
	cout << "\n";
}

void Matriz::Imprimir()
{
	cout << "Matriz cargada: \n";
	for (int f = 0; f < 3; f++)
	{
		for (int c = 0; c < 3; c++)
		{
			cout << matriz[f][c];
			cout << " ";
		}
		cout << "\n";
	}
}

void Matriz::Imprimir(int fila, int columna)
{
	cout << fila << " " << columna << ": ";
	cout << matriz[fila][columna];
}

void Matriz::EncontrarMayor(int *pmF, int *pmC)
{
	int mF = 0;
	int mC = 0;
	for (int f = 0; f < 3; f++)
	{
		for (int c = 0; c < 3; c++)
		{
			if (matriz[f][c] > matriz[mF][mC])
			{
				mF = f;
				mC = c;
			}
		}
	}
	*pmF = mF;
	*pmC = mC;
}

//int main()
//{
//	Matriz matriz;
//	matriz.Imprimir();
//	int mayorFila;
//	int mayorColumna;
//	matriz.EncontrarMayor(&mayorFila, &mayorColumna);
//	cout << "El mayor elemento es: \n";
//	matriz.Imprimir(mayorFila, mayorColumna);
//
//	return 0;
//}