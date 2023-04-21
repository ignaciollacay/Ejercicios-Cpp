#include<iostream>
using namespace std;

class ListaGenericaOrdenadaMayorMenor
{
public:
	ListaGenericaOrdenadaMayorMenor();
	~ListaGenericaOrdenadaMayorMenor();
	void Insertar(int x);
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

ListaGenericaOrdenadaMayorMenor::ListaGenericaOrdenadaMayorMenor()
{
	raiz = NULL;
}

ListaGenericaOrdenadaMayorMenor::~ListaGenericaOrdenadaMayorMenor()
{
	Nodo* borrar;
	Nodo* reco = raiz;
	while (reco != NULL)
	{
		borrar = reco;
		reco = reco->sig;
		delete borrar;
	}
}

void ListaGenericaOrdenadaMayorMenor::Insertar(int x)
{
	Nodo* nuevo = new Nodo();
	nuevo->info = x;
	
	// 1- Lista vacia
	if (raiz == NULL)
	{
		raiz = nuevo;
	}
	// 2- Lista no-vacia
	else
	{
		// 2.1- Principio de la Lista
		if (x > raiz->info)
		{
			nuevo->sig = raiz;
			raiz = nuevo;
		}
		else 
		{
			Nodo* reco = raiz;
			Nodo* anterior = raiz;
			while (x <= reco->info && reco->sig != NULL)
			{
				anterior = reco;
				reco = reco->sig;
			}
			// 2.2- Final de la Lista
			if (x <= reco->info)
			{
				reco->sig = nuevo;
			}
			// 2.3- Medio de la lista
			else
			{
				nuevo->sig = reco;
				anterior->sig = nuevo;
			}
		}
	}
}

void ListaGenericaOrdenadaMayorMenor::Imprimir()
{
	cout << "Imprimiendo lista: \n";
	Nodo* reco = raiz;
	while (reco != NULL)
	{
		cout << reco->info << "-";
		reco = reco->sig;
	}
	cout << "\n";
}


int main()
{
	ListaGenericaOrdenadaMayorMenor* lgo = new ListaGenericaOrdenadaMayorMenor();
	lgo->Insertar(2);
	lgo->Insertar(1);
	lgo->Insertar(3);
	lgo->Imprimir();
	return 0;
}