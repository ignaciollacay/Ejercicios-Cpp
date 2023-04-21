#include<iostream>

using namespace std;

class Matriz
{
	int mat[2][5];
public:
	void Cargar();
	void Imprimir();
};

void Matriz::Cargar()
{
	cout << "Ingrese los valores de la matriz" << "\n";
	for (int col = 0; col < 5; col++)
	{
		for (int fila = 0; fila < 2; fila++)
		{
			cout << "Columna " << col << ". Fila " << fila <<  ": ";
			cin >> mat[fila][col];
		}
	}
}
void Matriz::Imprimir()
{
	for (int fila = 0; fila < 2; fila++)
	{
		for (int col = 0; col < 5; col++)
		{
			cout << mat[fila][col] << " ";
		}
		cout << "\n";
	}
}

//int main()
//{
//	Matriz m;
//	m.Cargar();
//	m.Imprimir();
//	return 0;
//}