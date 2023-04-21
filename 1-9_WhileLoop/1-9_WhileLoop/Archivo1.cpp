#include<iostream>

using namespace std;

// Ejercicio 7: ParesImpares 
void main() 
{
	int cantidadNumeros, i = 1;
	int pares = 0, impares = 0;

	cout << "Inserte la cantidad de numeros: ";
	cin >> cantidadNumeros;

	while (i <= cantidadNumeros)
	{
		int valor;
		cout << "Inserte el valor ";
		cout << i;
		cout << ": ";
		cin >> valor;

		if (valor % 2 == 0)
		{
			pares = pares + 1;
		}
		else
		{
			impares = impares + 1;
		}

		i = i + 1;
	}
	cout << "La cantidad de valores pares es: ";
	cout << pares;
	cout << "\n";
	cout << "La cantidad de valores impares es: ";
	cout << impares;
}

//Ejercicio 6: CompararDosListasDe15Numeros
void main()
{
	int maxListas = 2, contadorListas = 1;
	int acumuladorLista1, acumuladorLista2;

	while (contadorListas <= maxListas)
	{
		int maxValores = 15, contadorValores = 1;
		int acumulador = 0;

		cout << "Lista ";
		cout << contadorListas;
		cout << "\n";

		while (contadorValores <= maxValores)
		{
			int valor;
			cout << "Inserte el valor ";
			cout << contadorValores;
			cout << ": ";
			cin >> valor;

			acumulador = acumulador + valor;
			contadorValores = contadorValores + 1;
		}

		if (contadorListas == 1)
		{
			acumuladorLista1 = acumulador;
		}
		else 
		{
			acumuladorLista2 = acumulador;
		}

		contadorListas = contadorListas + 1;
	}

	if (acumuladorLista1 > acumuladorLista2)
	{
		cout << "Lista 1 mayor";
	}
	else if (acumuladorLista1 < acumuladorLista2)
	{
		cout << "Lista 2 mayor";
	}
	else 
	{
		cout << "Listas iguales";
	}
}

//Ejercicio 5: Multiplos8Hasta500()
void main()
{
	int multiplicador = 1;
	int multiplo = 8;
	int proxMultiplo = 0;

	while (proxMultiplo <= 500)
	{
		if (multiplicador != 1)
		{
			cout << " - ";
		}

		cout << multiplo * multiplicador;
		multiplicador = multiplicador + 1;
		proxMultiplo = multiplo * multiplicador;
	}
}

// Ejercicio 4
void Serie11()
{
	int num = 11;
	int x = 1;

	while (x <= 25)
	{
		cout << num;
		if (x < 25)
		{
			cout << " - ";
		}
		num = num + 11;
		x = x + 1;
	}
}

// Ejercicio 3
void SueldosGastos()
{
	int cantidadEmpleados, contadorEmpleados = 1;
	int sueldosMayor300 = 0, sueldosMenor300 = 0;
	int gastos = 0;

	cout << "Ingrese la cantidad de empleados: ";
	cin >> cantidadEmpleados;

	while (contadorEmpleados <= cantidadEmpleados)
	{
		int sueldo = 0;

		cout << "Ingrese el valor del sueldo del ";
		cout << "empleado ";
		cout << contadorEmpleados;
		cout << ": ";
		cin >> sueldo;

		while (sueldo < 100 || sueldo > 500)
		{
			cout << "Valor incorrecto. Ingrese un valor entre 100 y 500: ";
			cin >> sueldo;
		}

		if (sueldo > 300)
		{
			sueldosMayor300 = sueldosMayor300 + 1;
		}
		else
		{
			sueldosMenor300 = sueldosMenor300 + 1;
		}

		gastos = gastos + sueldo;
		contadorEmpleados = contadorEmpleados + 1;
	}

	cout << "La cantidad de empleados que cobran mas de $300 es: ";
	cout << sueldosMayor300;
	cout << "\n";
	cout << "La cantidad de empleados que cobran entre $100 y $300 es: ";
	cout << sueldosMenor300;
	cout << "\n";
	cout << "El importe que gasta la empresa en sueldos al personal es: ";
	cout << gastos;
}

// Ejercicio 2
int promedioAlturas()
{
	int cantidadAlturas;
	int contadorAlturas = 1;
	int sumaAlturas = 0;
	int promedioAlturas;

	cout << "Ingrese la cantidad de alturas: ";
	cin >> cantidadAlturas;

	while (contadorAlturas <= cantidadAlturas)
	{
		int altura;
		cout << "Ingrese la altura: ";
		cin >> altura;

		sumaAlturas = sumaAlturas + altura;
		contadorAlturas = contadorAlturas + 1;
	}

	promedioAlturas = sumaAlturas / cantidadAlturas;

	cout << "El promedio de las alturas ingresadas es: ";
	cout << promedioAlturas;

	return promedioAlturas;
}

// Ejercicio 1
int NotasMayorOIgual7()
{
	int cantidadAlumnos = 10;
	int contadorAlumnos = 0, cantidadMayor7 = 0, cantidadMenor7 = 0;

	while (contadorAlumnos < cantidadAlumnos)
	{
		int notaAlumno;
		cout << "Ingrese la nota del alumno: ";
		cin >> notaAlumno;

		if (notaAlumno >= 7)
		{
			cantidadMayor7 = cantidadMayor7 + 1;
		}
		else
		{
			cantidadMenor7 = cantidadMenor7 + 1;
		}

		contadorAlumnos = cantidadMenor7 + cantidadMayor7;
	}

	cout << "La cantidad de notas mayor a 7 es: ";
	cout << cantidadMayor7;
	cout << "\n";
	cout << "La cantidad de notas menor a 7 es: ";
	cout << cantidadMenor7;

	return 0;
}