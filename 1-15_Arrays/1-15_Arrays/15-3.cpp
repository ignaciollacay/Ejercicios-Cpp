//#include<iostream>
//
//using namespace std;
//
//class Vector
//{
//private:
//	
//	int SumaVector(int vector[5], int cantidadComponentes);
//	int PromedioVector(int vector[5], int cantidadComponentes);
//public:
//	int array1[5];
//	int array2[5];
//
//	void MayorPromedioVectores(int vector1[5], int vector2[5]);
//	void CrearDosVectores(int max); 
//};
//
//void Vector::CrearDosVectores(int max)
//{
//	cout << "Ingrese las notas de Clase A \n";
//	for (int i = 0; i < max; i++)
//	{
//		cout << "Componente ";
//		cout << i;
//		cout << ": ";
//		cin >> array1[i];
//	}
//	cout << "\n";
//	cout << "Ingrese las notas de Clase B \n";
//	for (int i = 0; i < max; i++)
//	{
//		cout << "Componente ";
//		cout << i;
//		cout << ": ";
//		cin >> array2[i];
//	}
//	cout << "\n";
//}
//void Vector::MayorPromedioVectores(int array1[5], int array2[5])
//{
//	int promedioVector1 = PromedioVector(array1, 5);
//	int promedioVector2 = PromedioVector(array2, 5);
//
//	cout << "Tiene mayor promedio: ";
//	if (promedioVector1 > promedioVector2)
//		cout << "Clase A";
//	else
//		cout << "Clase B";
//}
//int Vector::PromedioVector(int vector[5], int cantidadComponentes)
//{
//	int sumaVector = SumaVector(vector, cantidadComponentes);
//	int promedioVector = sumaVector / cantidadComponentes;
//	return promedioVector;
//}
//int Vector::SumaVector(int vector[5], int cantidadComponentes)
//{
//	int sumaVector = 0;
//	for (int i = 0; i < cantidadComponentes; i++)
//	{
//		sumaVector += vector[i];
//	}
//	return sumaVector;
//}
//int main()
//{
//	Vector vector;
//	vector.CrearDosVectores(5);
//	vector.MayorPromedioVectores(vector.array1, vector.array2);
//	return 0;
//}