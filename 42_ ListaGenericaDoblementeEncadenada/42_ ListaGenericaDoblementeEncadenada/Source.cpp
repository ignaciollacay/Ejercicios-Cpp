#include<iostream>
using namespace std;

class ListaGenericaDoble
{
public:
	ListaGenericaDoble();
	~ListaGenericaDoble();
	int Cantidad();
	bool Vacia();
	void InsertarPrimero(int x);
	void InsertarSegundo(int x);
	void InsertarUltimo(int x);
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
		Nodo* ant;
	};

	Nodo* raiz;
};

ListaGenericaDoble::ListaGenericaDoble()
{
	raiz = NULL;
}

ListaGenericaDoble::~ListaGenericaDoble()
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

int ListaGenericaDoble::Cantidad()
{
	Nodo* reco = raiz;
	int cantidad = 0;
	while (reco != NULL)
	{
		cantidad++;
	}
	return cantidad;
}
bool ListaGenericaDoble::Vacia()
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

void ListaGenericaDoble::InsertarPrimero(int x)
{
	Nodo* nuevo = new Nodo();
	nuevo->info = x;

	//if (pos == 1)
		nuevo->sig = raiz;
		if (!Vacia())
			raiz->ant = nuevo;
		raiz = nuevo;
}
void ListaGenericaDoble::InsertarSegundo(int x)
{
	Nodo* nuevo = new Nodo();
	nuevo->info = x;

	// if (pos == 2)
	if (!Vacia())
	{
		if (raiz->sig == NULL)
		{
			raiz->sig = nuevo;
			nuevo->ant = raiz;
		}
		else
		{
			//Nodo* siguiente = reco->sig; // el nodo viejo en la posicion a insertar, sera el siguiente del nuevo.
			//reco->sig = nuevo; // insertar nodo nuevo en la posicion a insertar;
			//nuevo->ant = reco; // enlazar el nodo anterior del nuevo nodo
			//nuevo->sig = siguiente; // enlazar el nodo siguiente del nuevo nodo
			//siguiente->ant = nuevo; // el nodo viejo en la posicion a insertar, enlazar como anterior al nuevo nodo

			Nodo* segundo = raiz->sig;
			nuevo->sig = segundo;
			nuevo->ant = raiz;
			raiz->sig = nuevo;
			segundo->ant = nuevo;
		}
	}
}

void ListaGenericaDoble::InsertarUltimo(int x)
{
	Nodo* nuevo = new Nodo();
	nuevo->info = x;

	//if (pos == Cantidad() + 1)
		Nodo* reco = raiz;
		while (reco->sig != NULL)
		{
			reco = reco->sig;
		}
		reco->sig = nuevo;
		nuevo->ant = reco;
}

void ListaGenericaDoble::InsertarAnteultimo(int x)
{
	Nodo* nuevo = new Nodo();
	nuevo->info = x;
	// Si solo hay un elemento, insertar primero
	if (raiz->sig == NULL)
	{
		nuevo->sig = raiz;
		raiz->ant = nuevo;
		nuevo->ant = NULL;
		raiz = nuevo;
	}
	else
	{
		Nodo* reco = raiz;

		while (reco->sig != NULL)
		{
			reco = reco->sig;
		}

		Nodo* anteultimo = reco->ant;
		anteultimo->sig = nuevo;
		nuevo->ant = anteultimo;
		nuevo->sig = reco;
		reco->ant = nuevo;
	}
}

void ListaGenericaDoble::BorrarPrimero()
{
	Nodo* bor = raiz;
	raiz = raiz->sig;
	if (!Vacia())
		raiz->ant = NULL;

	delete bor;
}

void ListaGenericaDoble::BorrarSegundo()
{
	// Posicion a borrar
	Nodo* segundo = raiz->sig;

	// Enlazar el nodo siguiente del nodo en la posicion anterior a borrar
	raiz->sig = segundo->sig;

	// Enlazar el nodo anterior del nodo en la posicion siguiente a borrar
	Nodo* tercero = segundo->sig;
	if (tercero->sig != NULL)
	{
		tercero->ant = raiz;
	}

	delete segundo;
}

void ListaGenericaDoble::BorrarUltimo()
{
	// Avanzamos el puntero hasta la posicion anterior a borrar
	Nodo* ultimo = raiz;
	while (ultimo->sig != NULL)
		ultimo = ultimo->sig;

	// Posicion a borrar
	Nodo* anteultimo = ultimo->ant;

	// Enlazar el nodo siguiente del nodo en la posicion anterior a borrar
	anteultimo->sig = NULL;

	delete ultimo;
}

void ListaGenericaDoble::BorrarMayor()
{
	Nodo* reco = raiz;
	int mayor = raiz->info;
	while (reco != NULL)
	{
		if (reco->info > mayor)
		{
			mayor = reco->info;
		}
		reco = reco->sig;
	}

	reco = raiz;
	Nodo* bor;
	while (reco != NULL)
	{
		if (reco->info == mayor)
		{
			// Primero
			if (reco == raiz)
			{
				bor = raiz;
				raiz = raiz->sig;
				if (raiz != NULL)
					raiz->ant = NULL;
				delete bor;
				return;
			}
			// Ultimo
			else if (reco->sig == NULL)
			{
				bor = reco;
				Nodo* anteultimo = reco->ant;
				anteultimo->sig = NULL;
				delete bor;
				return;
			}
			// Medio
			else 
			{
				Nodo* anterior = reco->ant;
				bor = reco;
				Nodo* siguiente = reco->sig;
				anterior->sig = siguiente;
				siguiente->ant = anterior;
				delete bor;
				return;
			}
		}
		else
		{
			reco = reco->sig;
		}
	}

}

void ListaGenericaDoble::Imprimir()
{
	cout << "Imprimir Lista:" << "\n";
	Nodo* reco = raiz;
	while (reco != NULL)
	{
		cout << reco->info << " - ";
		reco = reco->sig;
	}
	cout << "\n";
}

int main()
{
	ListaGenericaDoble* lg = new ListaGenericaDoble();
	lg->InsertarPrimero(10);
	lg->InsertarPrimero(45);
	lg->InsertarPrimero(23);
	lg->InsertarPrimero(89);
	lg->Imprimir();
	cout << "Insertamos un nodo al final:\n";
	lg->InsertarUltimo(160);
	lg->Imprimir();
	cout << "Insertamos un nodo en la segunda posición:\n";
	lg->InsertarSegundo(13);
	lg->Imprimir();
	cout << "Insertamos un nodo en la anteultima posición:\n";
	lg->InsertarAnteultimo(600);
	lg->Imprimir();
	cout << "Borramos el primer nodo de la lista:\n";
	lg->BorrarPrimero();
	lg->Imprimir();
	cout << "Borramos el segundo nodo de la lista:\n";
	lg->BorrarSegundo();
	lg->Imprimir();
	cout << "Borramos el ultimo nodo de la lista:\n";
	lg->BorrarUltimo();
	lg->Imprimir();
	cout << "Borramos el mayor de la lista:\n";
	lg->BorrarMayor();
	lg->Imprimir();
	return 0;
}


