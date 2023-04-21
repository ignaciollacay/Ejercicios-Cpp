#include<iostream>

using namespace std;

int main()
{
	int preguntasRealizadas, respuestasCorrectas;

	cout << "Ingrese la cantidad de preguntas realizadas: ";
	cin >> preguntasRealizadas;
	cout << "Ingrese la cantidad de respuestas correctas: ";
	cin >> respuestasCorrectas;

	int porcentaje = (respuestasCorrectas * 100) / preguntasRealizadas;

	cout << "Su porcentaje es: ";
	cout << porcentaje;
	cout << "\n ";
	cout << "Su calificacion es: ";


	if (porcentaje >= 50)
	{
		if (porcentaje >= 90)
		{
			cout << "Nivel Maximo";
		}
		else
		{
			if (porcentaje >= 75)
			{
				cout << "Nivel Medio";
			}
			else
			{
				cout << "Nivel Regular";
			}
		}
	}
	else
	{
		cout << "Fuera de nivel";
	}

	return 0;
}

int NumeroMayor()
{
	int num1, num2, num3;
	cout << "Ingrese el primer valor: ";
	cin >> num1;
	cout << "Ingrese el segundo valor: ";
	cin >> num2;
	cout << "Ingrese el tercer valor: ";
	cin >> num3;

	if (num1>num2)
	{
		if (num1 > num3)
		{

			cout << num1;
		}
		else 
		{
			cout << num3;
		}
	}
	else 
	{
		if (num2>num3)
		{
			cout << num2;
		}
		else 
		{
			cout << num3;
		}
	}
}

int PosNegNulo()
{
	int num;
	cout << "Ingrese el primer valor: ";
	cin >> num;

	if (num == 0) 
	{
		cout << "Nulo";
	}
	else 
	{
		if (num > 0)
		{
			cout << "Positivo";
		}
		else
		{
			cout << "Negativo";
		}
	}
}

int CantidadCifras()
{
	int num;

	cout << "Ingrese un numero entero positivo de hasta 3 cifras: ";
	cin >> num;

	if (num < 1000 && num > 0)
	{
		if (num >= 100)
		{
			cout << "Tiene 3 cifras";
		}
		else
		{
			if (num >= 10)
			{
				cout << "Tiene 2 cifras";
			}
			else 
			{
				cout << "Tiene 1 cifra";
			}
		}
	}
	else 
	{
		if (num >= 1000) 
		{
			cout << "Error: Tiene mas de 3 cifras";
		}
		else
		{
			cout << "Error: No es positivo";
		}
	}
}

int TestCapacitacion()
{	
	int preguntasRealizadas, respuestasCorrectas;

	cout << "Ingrese la cantidad de preguntas realizadas: ";
	cin >> preguntasRealizadas;
	cout << "Ingrese la cantidad de respuestas correctas: ";
	cin >> respuestasCorrectas;

	int porcentaje = (respuestasCorrectas * 100) / preguntasRealizadas;

	cout << "Su porcentaje es: ";
	cout << porcentaje;
	cout << "\n ";
	cout << "Su calificacion es: ";


	if (porcentaje >= 50)
	{
		if (porcentaje >= 90)
		{
			cout << "Nivel Maximo";
		}
		else
		{
			if (porcentaje >= 75)
			{
				cout << "Nivel Medio";
			}
			else
			{
				cout << "Nivel Regular";
			}
		}
	}
	else
	{
		cout << "Fuera de nivel";
	}

	return 0;
}