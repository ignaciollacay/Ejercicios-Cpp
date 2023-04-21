#include<iostream>
#include "ListGeneric.h"
using namespace std;

class ListGeneric
{
public:
	ListGeneric();
	~ListGeneric();
	bool Vacia();
	int Cantidad();
	void Insertar(int pos, int x);
	void Borrar(int pos);
	void InsertarPrincipio(int x);
	void InsertarFinal(int x);
	void InsertarSegundo(int x);
	void InsertarAnteultimo(int x);
	void BorrarPrimero();
	void BorrarSegundo();
	void BorrarUltimo();
	void BorrarMayor();
	void Imprimir();
private:
	class Nodo
	{
	public:
		int info;
		Nodo* sig;
	};
	Nodo* raiz;
};

ListGeneric::ListGeneric()
{
	raiz = NULL;
}

ListGeneric::~ListGeneric()
{
	Nodo* reco = raiz;
	Nodo* bor;
	while (reco != NULL)
	{
		bor = reco;
		reco = reco->sig;
		delete bor;
	}
}

bool ListGeneric::Vacia()
{
	if (raiz == NULL)
		return true;
	else
		return false;
}

int ListGeneric::Cantidad()
{
	int cantidad = 0;
	Nodo* reco = raiz;
	while (reco != NULL)
	{
		cantidad++;
		reco = reco->sig;
	}
	return cantidad;
}

void ListGeneric::Insertar(int pos, int x)
{
	// Cantidad maxima de posiciones: Se puede insertar hasta la posicion uno mas alla que el ultimo nodo
	int max = Cantidad() + 1; 
	// Verificar si existe la posicion en la lista
	if (pos <= max)
	{
		Nodo* nuevo = new Nodo();
		nuevo->info = x;
		// Asignacion del siguiente nodo y la raiz varia segun la posicion en la cual insertar (primero, ultimo o medio)
		if (pos == 1)
		{
			// Asignar nuevas direcciones a la raiz actual y nueva.
			nuevo->sig = raiz;
			raiz = nuevo;
		}
		else if (pos == max)
		{
			// Asignar nuevas direcciones a la cola de la lista actual y nueva. 
			// Hay que Recorrer la lista para encontrar la ultima posicion. 
			Nodo* reco = raiz;
			while (reco->sig != NULL)
			{
				reco = reco->sig;
			}
			reco->sig = nuevo;
			nuevo->sig = NULL;
		}
		else
		{
			Nodo* reco = raiz; 
			// Hay que recorrer la lista para encontrar el nodo correspondiente a la posicion (-1 por el cantidad + 1 & -1 por el siguiente ?)
			for (int i = 0; i < pos - 2; i++)
			{
				reco = reco->sig;
			}
			// Asignar nuevas direcciones al nodo actual y el nuevo.
			Nodo* sig = reco->sig;
			reco->sig = nuevo;
			nuevo->sig = sig;
		}
	}
}

void ListGeneric::Borrar(int pos)
{
	// Idem insertar
	int max = Cantidad() + 1;
	if (pos <= max)
	{
		Nodo* borrar;
		if (pos == 1)
		{
			borrar = raiz;
			raiz = raiz->sig;
		}
		else
		{
			Nodo* reco = raiz;
			for (int i = 0; i < pos-2; i++)
			{
				reco = reco->sig;
			}
			Nodo* sig = reco->sig;
			reco->sig = sig->sig;
			borrar = sig;
		}
		delete borrar;
	}
}

void ListGeneric::InsertarPrincipio(int x)
{
	//Insertar(1, x);
	Nodo* nuevo = new Nodo();
	nuevo->info = x;
	nuevo->sig = raiz;
	raiz = nuevo;
}
void ListGeneric::InsertarSegundo(int x)
{
	if (!Vacia())
	{
		//Insertar(2, x);
		Nodo* nuevo = new Nodo();
		nuevo->info = x;
		Nodo* old = raiz->sig;
		nuevo->sig = old;
		raiz->sig = nuevo;
	}
}
void ListGeneric::InsertarAnteultimo(int x)
{
	//int posAnteultimo = Cantidad() - 1;
	//Insertar(posAnteultimo, x);
	Nodo* nuevo = new Nodo();
	nuevo->info = x;
	Nodo* reco = raiz;
	for (int i = 0; i < Cantidad()-2; i++)
	{
		reco = reco->sig;
	}
	Nodo* sig = reco->sig;
	reco->sig = nuevo;
	nuevo->sig = sig;
}
void ListGeneric::InsertarFinal(int x)
{
	//int posFinal = Cantidad();
	//Insertar(posFinal, x);
	Nodo* nuevo = new Nodo();
	nuevo->info = x;

	Nodo* reco = raiz;
	for (int i = 0; i < Cantidad()-1; i++)
	{
		reco = reco->sig;
	}
	Nodo* sig = reco->sig;
	reco->sig = nuevo;
	nuevo->sig = sig;
}
void ListGeneric::BorrarPrimero()
{
	Nodo* borrar = raiz;
	raiz = raiz->sig;
	delete borrar;
}
void ListGeneric::BorrarSegundo()
{
	Nodo* borrar = raiz->sig;
	raiz->sig = borrar->sig;
	delete borrar;
}
void ListGeneric::BorrarUltimo()
{
	Nodo* reco = raiz;
	for (int i = 0; i < Cantidad() - 2; i++)
	{
		reco = reco->sig;
	}
	Nodo* sig = reco->sig;
	reco->sig = sig->sig;
	Nodo* borrar = sig;
	delete borrar;
}
void ListGeneric::BorrarMayor()
{
	Nodo* mayor = raiz;
	Nodo* reco = raiz->sig;
	int pos = 0;
	int posMayor = 0;

	while (reco != NULL)
	{
		if (reco->info > mayor->info)
		{
			mayor = reco;
			posMayor = pos;
		}
		pos = pos + 1;
		reco = reco->sig;
	}

	Nodo* anterior = raiz;
	for (int i = 0; i < posMayor; i++)
	{
		anterior = anterior->sig;
	}
	anterior->sig = mayor->sig;
	delete mayor;
}

void ListGeneric::Imprimir()
{
	Nodo* reco = raiz;
	while (reco != NULL)
	{
		cout << reco->info << "-";
		reco = reco->sig;
	}
	cout << "\n";
}

//int main()
//{
//	ListGeneric* listaGenerica = new ListGeneric();
//	listaGenerica->Insertar(1, 0);
//	listaGenerica->Insertar(2, 1);
//	listaGenerica->Insertar(3, 2);
//	listaGenerica->Insertar(4, 3);
//	cout << "Imprimir lista completa: \n ";
//	listaGenerica->Imprimir();
//	listaGenerica->InsertarPrincipio(11);
//	cout << "Insertar prinicipio: \n ";
//	listaGenerica->Imprimir();
//	listaGenerica->InsertarSegundo(22);
//	cout << "Insertar segundo: \n ";
//	listaGenerica->Imprimir();
//	listaGenerica->InsertarAnteultimo(33);
//	cout << "Insertar anteultimo: \n ";
//	listaGenerica->Imprimir();
//	listaGenerica->InsertarFinal(44);
//	cout << "Insertar final: \n ";
//	listaGenerica->Imprimir();
//	listaGenerica->BorrarPrimero();
//	cout << "Borrar Primero: \n ";
//	listaGenerica->Imprimir();
//	listaGenerica->BorrarSegundo();
//	cout << "Borrar Segundo: \n ";
//	listaGenerica->Imprimir();
//	listaGenerica->BorrarUltimo();
//	cout << "Borrar Ultimo: \n ";
//	listaGenerica->Imprimir();
//	listaGenerica->BorrarMayor();
//	cout << "Borrar Mayor: \n ";
//	listaGenerica->Imprimir();
//
//	return 0;
//}
