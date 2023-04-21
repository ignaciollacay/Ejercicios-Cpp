//#include<iostream>
//
//using namespace std;
//
//class Array8
//{
//private:
//	int numeros[8];
//public:
//	void CrearArray();
//	void SumaVector();
//	void SumaMayoresA(int max);
//	void CantidadMayoresA(int max);
//};
//
//
//void Array8::CrearArray()
//{
//	cout << "Ingrese los valores del vector: \n";
//	for (int i = 0; i < 8; i++)
//	{
//		cout << i;
//		cout << ": ";
//		cin >> numeros[i];
//	}
//}
//void Array8::SumaVector()
//{
//	int suma = 0;
//	for (int i = 0; i < 8; i++)
//	{
//		suma = suma + numeros[i];
//	}
//	cout << "La suma de todos los valores es: ";
//	cout << suma;
//	cout << "\n";
//}
//void Array8::SumaMayoresA(int max)
//{
//	int suma = 0;
//	for (int i = 0; i < 8; i++)
//	{
//		if (numeros[i] > max)
//		{
//			suma = suma + numeros[i];
//		}
//	}
//	cout << "La suma de los valores mayores a ";
//	cout << max;
//	cout << " es: ";
//	cout << suma;
//	cout << "\n";
//}
//void Array8::CantidadMayoresA(int max)
//{
//	int suma = 0;
//	for (int i = 0; i < 8; i++)
//	{
//		if (numeros[i] > max)
//		{
//			suma++;
//		}
//	}
//	cout << "La cantidad de valores mayores a ";
//	cout << max;
//	cout << " es: ";
//	cout << suma;
//	cout << "\n";
//}


//int main()
//{
//	Array8 myArray8;
//	myArray8.CargarDatos();
//	myArray8.SumaVector();
//	myArray8.SumaMayoresA(36);
//	myArray8.CantidadMayoresA(50);
//	return 0;
//}
