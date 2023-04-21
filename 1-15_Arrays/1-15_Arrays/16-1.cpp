//#include<iostream>
//
//using namespace std;
//
//class VectorParalelo
//{
//public:
//	char productos[20][5];
//	int precios[5];
//	void Crear();
//	int MayoresA(int x);
//};
//
//void VectorParalelo::Crear()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Ingrese el nombre del producto: ";
//		cin >> productos[i];
//		cout << "Ingrese el precio del producto: ";
//		cin >> precios[i];
//	}
//}
//
//int VectorParalelo::MayoresA(int x)
//{
//	int productosMayores = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		if (precios[i] > x)
//		{
//			productosMayores++;
//		}
//	}
//
//	cout << "La cantidad de productos mayores es: ";
//	cout << productosMayores;
//
//	return productosMayores;
//}
//
//int main()
//{
//	VectorParalelo vectorParalelo;
//	vectorParalelo.Crear();
//	vectorParalelo.MayoresA(vectorParalelo.precios[0]);
//	return 0;
//}
