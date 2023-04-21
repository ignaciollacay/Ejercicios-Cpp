//#include<iostream>
//
//using namespace std;
//
//class ArrayEj2
//{
//private:
//	int array1[4];
//	int array2[4];
//public:
//	void CrearDosVectores();
//	void SumaVectores();
//};
//
//void ArrayEj2::CrearDosVectores()
//{
//	cout << "Ingrese los valores del primer vector \n";
//	for (int i = 0; i < 4; i++)
//	{
//		cout << "Componente ";
//		cout << i;
//		cout << ": ";
//		cin >> array1[i];
//	}
//	cout << "\n";
//	cout << "Ingrese los valores del segundo vector \n";
//	for (int i = 0; i < 4; i++)
//	{
//		cout << "Componente ";
//		cout << i;
//		cout << ": ";
//		cin >> array2[i];
//	}
//	cout << "\n";
//}
//void ArrayEj2::SumaVectores()
//{
//	cout << "La suma de cada componente de ambos vectores es \n";
//	int array3[4];
//	for (int i = 0; i < 4; i++)
//	{
//		array3[i] = array1[i] + array2[i];
//		cout << "Componente ";
//		cout << i;
//		cout << ": ";
//		cout << array3[i];
//		cout << "\n";
//	}
//}

//int main()
//{
//	ArrayEj2 array;
//	array.CrearDosVectores();
//	array.SumaVectores();
//	return 0;
//}