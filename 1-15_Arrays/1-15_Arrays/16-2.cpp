#include<iostream>

using namespace std;

class VectorParalelo2
{
public:
	char nombre[20][5];
	int nota[5];
	void Crear();
	void AgregarCondicion();
};

void VectorParalelo2::Crear()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Alumno ";
		cout << i;
		cout << "\n";
		cout << "Ingrese el nombre: ";
		cin >> nombre[i];
		cout << "Ingrese la nota: ";
		cin >> nota[i];
	}
}

void VectorParalelo2::AgregarCondicion()
{
	string condicionAlumno[5];
	int muyBuenos = 0;

	for (int i = 0; i < 5; i++)
	{
		
		if (nota[i] >= 8)
		{
			condicionAlumno[i] = "Muy Bueno";
			muyBuenos++;
		}
		else if (nota[i] >= 4)
		{
			condicionAlumno[i] = "Bueno";
		}
		else
		{
			condicionAlumno[i] = "Insuficiente";
		}
		cout << "\n";
		cout << "La condicion del alumno ";
		cout << nombre[i];
		cout << " es: ";
		cout << condicionAlumno[i];
		
	}

	cout << "\n";
	cout << "La cantidad de muy buenos es: ";
	cout << muyBuenos;
}

//int main()
//{
//	VectorParalelo2 vectorParalelo;
//	vectorParalelo.Crear();
//	vectorParalelo.AgregarCondicion();
//	return 0;
//}
