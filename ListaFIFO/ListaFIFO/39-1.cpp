#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Lifo
{
public:
	Lifo();
	~Lifo();
	bool Vacia();
	void Insertar(int x);
	int Extraer();
private:
	class Nodo
	{
	public:
		int info;
		Nodo* sig;
	};
	Nodo* raiz;
	Nodo* fondo;
};

Lifo::Lifo()
{
	raiz = NULL;
	fondo = NULL;
}

Lifo::~Lifo()
{
	Nodo* reco = raiz;
	Nodo* bor;
	while (reco != NULL)
	{
		bor = reco;
		reco = raiz->sig;
		delete bor;
	}
}
bool Lifo::Vacia()
{
	if (raiz == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Lifo::Insertar(int x)
{
	Nodo* nuevo = new Nodo();
	nuevo->info = x;
	nuevo->sig = NULL;

	if (Vacia())
	{
		raiz = nuevo;
		fondo = nuevo;
	}
	else
	{
		fondo->sig = nuevo;
		fondo = nuevo;
	}
}

int Lifo::Extraer()
{
	if (!Vacia())
	{
		int info = raiz->info;
		Nodo* bor = raiz;
		if (raiz == fondo)
		{
			raiz = NULL;
			fondo = NULL;
		}
		else
		{
			raiz = raiz->sig;
		}
		delete bor;
		return info;
	}
	else
	{
		return -1;
	}
}

class SuperMercado
{
public:
	void Simulacion();

private:
	class Caja
	{
	public:
		int fila = 0;
		int salida = -1;
		Lifo* cola = new Lifo();
		void Atender(int minuto)
		{
			salida = minuto + rand() % (11 - 7 + 1) + 7; // Tiempo espera entre 7 y 11 min
			fila += 1;
			espera += salida;
		}
		int espera = 0;
	};

	//int CalcularPromedioEnCola(int atendidos);
};

void SuperMercado::Simulacion()
{
	srand(NULL);

	int minLlegada = 2; int maxLlegada = 3; // clientes llegan cada 2 o 3 minutos
	int llegada = rand() % (maxLlegada - minLlegada + 1) + minLlegada; // rand() % (upperBound - lowerBound + 1) + lowerBound

	int atendidos = 0;
	int marchados = 0;

	Caja* cajas[3];
	cajas[0] = new Caja();
	cajas[1] = new Caja();
	cajas[2] = new Caja();
	int menor = 0;

	for (int minutos = 0; minutos < (60*8); minutos++) // 8 horas = 60 * 8 minutos = 480
	{
		// que sucede cuando una persona llega:
		if (llegada == minutos)
		{
			// Si esta desocupada.
			if (cajas[menor]->fila == 0)
			{
				// el cajero esta desocupado.
				cajas[menor]->Atender(minutos);
				// proxima caja pasa a ser la menor.
				menor++;
			}
			else if (cajas[menor]->fila < 6)
			{
				// el cajero esta ocupado.
				cajas[menor]->Atender(minutos);
				// Agregar el tiempo en el que llego a la cola.
				cajas[menor]->cola->Insertar(minutos);
				menor++;
			}
			else
			{
				// Todos los cajeros estan ocupados con max atendidos. Se marcha.
				marchados++;
			}

			// Calcular cuando llega el proximo
			llegada = minutos + 2 + rand() % 2;
		}

		// que sucede cuando una persona se retira:
		for (int i = 0; i < 3; i++)
		{
			if (cajas[i]->salida == minutos)
			{
				// caja pasa a estar desocupada.
				// se decrementa la cantidad de la fila
				cajas[i]->fila--;
				// se incrementa la cantidad de atendidos
				atendidos++;

				if (!cajas[i]->cola->Vacia())
				{
					cajas[i]->cola->Extraer();
					cajas[i]->Atender(minutos);
				}
			}
		}
	}
	cout << "Atendidos:" << atendidos << "\n";
	cout << "Marchados:" << marchados << "\n";

	int suma = 0;
	// calcular promedio en cola
	for (int i = 0; i < 3; i++)
	{
		suma += cajas[i]->espera;
	}
	int promedio = suma / atendidos;

	cout << "Promedio en cola:" << promedio;
}

//int SuperMercado::CalcularPromedioEnCola(int atendidos)
//{
//	int suma = 0;
//	// calcular promedio en cola
//	for (int i = 0; i < 3; i++)
//	{
//		suma += cajas[i]->espera;
//	}
//	int promedio = suma / atendidos;
//	return promedio;
//}

int main()
{
	SuperMercado* supermercado = new SuperMercado();
	supermercado->Simulacion();
	delete supermercado;
	return 0;
}
