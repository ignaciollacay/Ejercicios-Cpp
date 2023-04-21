//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//class Cola
//{
//public:
//	Cola();
//	~Cola();
//	bool Vacia();
//	void Insertar(int x);
//	int Extraer();
//private:
//	class Nodo
//	{
//	public:
//		int info;
//		Nodo* sig;
//	};
//	Nodo* raiz;
//	Nodo* fondo;
//};
//
//Cola::Cola()
//{
//	raiz = NULL;
//	fondo = NULL;
//}
//
//Cola::~Cola()
//{
//	Nodo* reco = raiz;
//	Nodo* bor;
//	while (reco != NULL)
//	{
//		bor = reco;
//		reco = raiz->sig;
//		delete bor;
//	}
//}
//bool Cola::Vacia()
//{
//	if (raiz == NULL)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void Cola::Insertar(int x)
//{
//	Nodo* nuevo = new Nodo();
//	nuevo->info = x;
//	nuevo->sig = NULL;
//
//	if (Vacia())
//	{
//		raiz = nuevo;
//		fondo = nuevo;
//	}
//	else
//	{
//		fondo->sig = nuevo;
//		fondo = nuevo;
//	}
//}
//
//int Cola::Extraer()
//{
//	if (!Vacia())
//	{
//		int info = raiz->info;
//		Nodo* bor = raiz;
//		if (raiz == fondo)
//		{
//			raiz = NULL;
//			fondo = NULL;
//		}
//		else
//		{
//			raiz = raiz->sig;
//		}
//		delete bor;
//		return info;
//	}
//	else
//	{
//		return -1;
//	}
//}