#include<iostream>

using namespace std;

class VectorOrden
{
private:
	int numeros[5];
public:
	void Crear();
	void Mostrar(int vector[]);
	void Mostrar();
	void MayorMenor();
	void MenorMayor();

	// Funcion para ordenar
	void Ordenar(int vector[], int max)
	{
		for (int k = 0; k < max - 1 ; k++) // max - 1 repeticiones: si el vector tiene N componentes hay que hacer N-1 comparaciones.
		{
			for (int f = 0; f < (max - 1) - k; f++) // si el vector tiene N componentes hay que hacer N-1 comparaciones.
			{
				// Menor a mayor
				if (vector[f] > vector[f + 1]) //el actual es mayor al siguiente
				{
					// Intercambiar  el contenido del componente actual por el siguiente.
					int aux = vector[f];
					vector[f] = vector[f + 1];
					vector[f + 1] = aux;
				}
				// Mayor a menor
				if (vector[f] < vector[f + 1]) //el actual es menor al siguiente
				{
					// Intercambiar el contenido del componente actual por el siguiente.
					int aux = vector[f];
					vector[f] = vector[f + 1];
					vector[f + 1] = aux;
				}
			}
		}
	}

	void IntercambiarPorSiguiente(int vector[], int f)
	{
		int aux = vector[f];
		vector[f] = vector[f + 1];
		vector[f + 1] = aux;
	}
};

void VectorOrden::Crear()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Ingrese el numero: ";
		cin >> numeros[i];
	}
}
void VectorOrden::Mostrar(int vector[])
{
	for (int i = 0; i < 5; i++)
	{
		cout << vector[i];
		if (i != 5)
			cout << " - ";
	}
}
void VectorOrden::Mostrar()
{
	for (int i = 0; i < 5; i++)
	{
		cout << numeros[i];
		if (i != 4)
			cout << " - ";
	}
	cout << "\n";
}
void VectorOrden::MayorMenor()
{
	for (int k = 0; k < 5; k++)
	{
		for (int i = 0; i < 4 - k; i++)
		{
			if (numeros[i] < numeros[i+1])
			{
				int aux = numeros[i];
				numeros[i] = numeros[i + 1];
				numeros[i + 1] = aux;
			}
		}
	}
	cout << "Vector ordenado de mayor a menor: ";
}

void VectorOrden::MenorMayor()
{
	for (int k = 0; k < 5; k++)
	{
		for (int i = 0; i < 4 - k; i++)
		{
			if (numeros[i] > numeros[i + 1])
			{
				int aux = numeros[i];
				numeros[i] = numeros[i + 1];
				numeros[i + 1] = aux;
			}
		}
	}
	cout << "Vector ordenado de menor a mayor: ";
}
//int main() {
//	VectorOrden vo;
//	vo.Crear();
//	vo.Mostrar();
//	vo.MayorMenor();
//	vo.Mostrar();
//	vo.MenorMayor();
//	vo.Mostrar();
//	return 0;
//}
