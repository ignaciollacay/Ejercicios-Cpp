#include <iostream>

#define FILAS 4
#define COLUMNAS 2

using namespace std;


class Matriz
{
public:
	Matriz();
	void Imprimir();
private:
	int matriz[FILAS][COLUMNAS];
};

Matriz::Matriz()
{
	cout << "Ingrese los valores de la matriz \n";

	for (int i = 0; i < FILAS; i++)
	{
		for (int j = 0; j < COLUMNAS; j++)
		{
			cout << "Fila " << i << " Columna " << j << ": ";
			cin >> matriz[i][j];
		}
	}
}

void Matriz::Imprimir()
{
	for (int i = 0; i < FILAS; i++)
	{
		for (int j = 0; j < COLUMNAS; j++)
		{
			cout << matriz[i][j] << " - ";
		}
		cout << "\n";
	}
}

int main()
{
	Matriz* matriz1 = new Matriz();
	matriz1->Imprimir();
	delete matriz1;
	return 0;
}