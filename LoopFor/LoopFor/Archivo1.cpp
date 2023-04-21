#include<iostream>

using namespace std;

////Ejercicio 8
//int main()
//{
//	int estudiantesManana = 5, estudiantesTarde = 6, estudiantesNoche = 11;
//	int sumaManana = 0,	sumaTarde = 0, sumaNoche = 0;
//	int promedioManana = 0,	promedioTarde = 0, promedioNoche = 0;
//
//	cout << "Ingrese las edades de los estudiantes del turno manana \n";
//	for (int i = 1; i <= estudiantesManana; i++)
//	{
//		int edad;
//		cout << "Estudiante ";
//		cout << i;
//		cout << ": ";
//		cin >> edad;
//
//		sumaManana += edad;
//	}
//	promedioManana = sumaManana / estudiantesManana;
//	cout << "El promedio de edades de turno manana es: ";
//	cout << promedioManana;
//
//	cout << "\n";
//
//	cout << "Ingrese las edades de los estudiantes del turno tarde \n";
//	for (int i = 1; i <= estudiantesTarde; i++)
//	{
//		int edad;
//		cout << "Estudiante ";
//		cout << i;
//		cout << ": ";
//		cin >> edad;
//
//		sumaTarde += edad;
//	}
//	promedioTarde = sumaTarde / estudiantesTarde;
//	cout << "El promedio de edades de turno tarde es: ";
//	cout << promedioTarde;
//
//	cout << "\n";
//
//	cout << "Ingrese las edades de los estudiantes del turno noche \n";
//	for (int i = 1; i <= estudiantesNoche; i++)
//	{
//		int edad;
//		cout << "Estudiante ";
//		cout << i;
//		cout << ": ";
//		cin >> edad;
//
//		sumaNoche += edad;
//	}
//	promedioNoche = sumaNoche / estudiantesNoche;
//	cout << "El promedio de edades de turno Noche es: ";
//	cout << promedioNoche;
//
//
//	cout << "El turno con mayor promedio de edades es ";
//	if (promedioManana > promedioTarde && promedioManana > promedioNoche)
//		cout << "turno manana";
//	else 
//	{
//		if (promedioTarde > promedioNoche)
//			cout << "turno tarde";
//		else
//			cout << "turno noche";
//	}
//
//	return 0;
//}

//// Ejercicio 7
//void main()
//{
//	int positivos = 0, negativos = 0, multiplos5 = 0;
//
//	cout << "Ingrese los valores de 10 numeros \n";
//	for (int i = 1; i <= 10; i++)
//	{
//		int num;
//		cout << "Numero ";
//		cout << i;
//		cout << ": ";
//		cin >> num;
//
//		if (num > 0)
//		{
//			positivos++;
//		}
//		else 
//		{
//			negativos++;
//		}
//
//		if (num % 5 == 0)
//		{
//			multiplos5++;
//		}
//	}
//	cout << "La cantidad de numeros positivos es: ";
//	cout << positivos;
//	cout << "\nLa cantidad de numeros negativos es: ";
//	cout << negativos;
//	cout << "\nLa cantidad de multiplos de 5 es: ";
//	cout << multiplos5;
//}

//// Ejercicio 6
//void main()
//{
//	int puntos;
//	cout << "Ingrese la cantidad de puntos a ingresar: ";
//	cin >> puntos;
//
//	int cuadrante1 = 0, cuadrante2 = 0, cuadrante3 = 0, cuadrante4 = 0;
//
//	for (int i = 1; i <= puntos; i++)
//	{
//		cout << "Ingrese los valores del punto ";
//		cout << i;
//		cout << "\n";
//		int x, y;
//		cout << "Coordenada x: ";
//		cin >> x;
//		cout << "Coordenada y: ";
//		cin >> y;
//
//		if (x > 0)
//		{
//			if (y > 0)
//				cuadrante1++;
//			else 
//				cuadrante4++;
//		}
//		else
//		{
//			if (y > 0)
//				cuadrante2++;
//			else
//				cuadrante3++;
//		}
//	}
//	cout << "La cantidad de puntos en el cuadrante 1 es: ";
//	cout << cuadrante1;
//	cout << "\nLa cantidad de puntos en el cuadrante 2 es: ";
//	cout << cuadrante2;
//	cout << "\nLa cantidad de puntos en el cuadrante 3 es: ";
//	cout << cuadrante3;
//	cout << "\nLa cantidad de puntos en el cuadrante 4 es: ";
//	cout << cuadrante4;
//}

// Ejercicio 5: 
//void main()
//{
//	int triangulos, i = 1;
//	cout << "Cuantas medidas de triangulos ingresara: ";
//	cin >> triangulos;
//
//	int equilateros = 0;
//	int isosceles = 0;
//	int escalenos = 0;
//
//	for (i = 1; i <= triangulos; i++)
//	{
//		int lado1, lado2, lado3;
//		cout << "Triangulo ";
//		cout << i;
//		cout << "\n";
//		cout << "Ingrese la medida del primer lado: ";
//		cin >> lado1;
//		cout << "Ingrese la medida del segundo lado: ";
//		cin >> lado2;
//		cout << "Ingrese la medida del tercer lado: ";
//		cin >> lado3;
//
//		cout << "El triangulo ingresado es ";
//		if (lado1 == lado2 && lado1 == lado3)
//		{
//			cout << "equilatero";
//			equilateros = equilateros + 1;
//		}
//		else 
//		{
//			if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
//			{
//				cout << "isosceles";
//				isosceles = isosceles + 1;
//			}
//			else
//			{
//				cout << "escaleno";
//				escalenos = escalenos + 1;
//			}
//		}
//		cout << "\n";
//	}
//
//	cout << "\n La cantidad de triangulos equilateros es: ";
//	cout << equilateros;
//	cout << "\n La cantidad de triangulos isosceles es: ";
//	cout << isosceles;
//	cout << "\n La cantidad de triangulos escalenos es: ";
//	cout << escalenos;
//
//	cout << "\n El tipo de triangulo con menor cantidad es ";
//	if (equilateros < isosceles && equilateros < escalenos)
//	{
//		cout << equilateros;
//	}
//	if (isosceles < equilateros && isosceles < escalenos)
//	{
//		cout << isosceles;
//	}
//	if (escalenos < isosceles && escalenos < equilateros)
//	{
//		cout << escalenos;
//	}
//}

// Ejercicio 4: TablasMultiplicarDe1a10
//void main()
//{
//	int multiplo;
//	cout << "Ingrese un valor de 1 a 10: ";
//	cin >> multiplo;
//
//	for (int i = 1; i <= 12; i++)
//	{
//		int producto = multiplo * i;
//		cout << producto;
//		if (i != 12)
//			cout << ", ";
//	}
//}

//// Ejercicio 3:  tabla de multiplicar del 5 (del 5 al 50)
//void main()
//{
//	for (int i = 5; i <= 50; i++)
//	{
//		int producto = 5 * i;
//		cout << producto;
//		if (i != 50)
//			cout << " - ";
//	}
//}

//// Ejercicio 2: últimos 5 de 10 valores ingresados
//int main()
//{
//	int suma = 0;
//
//	for (int i = 1; i < 10; i++)
//	{
//		int num;
//		cout << "Ingrese un numero: ";
//		cin >> num;
//
//		if (i >= 5) 
//		{
//			suma = suma + num;
//		}
//	}
//	cout << "La suma de los ultimos 5 numeros agregados es: ";
//	cout << suma;
//}

//// Ejercicio 1 Triangulos superficie mayor a 12
//int main()
//{
//	int triangulos, i;
//	cout << "Cuantas medidas de triangulos ingresara: ";
//	cin >> triangulos;
//
//	int superficieMayor12 = 0;
//
//	for (i = 1; i <= triangulos; i++)
//	{
//		int base, altura;
//		cout << "Triangulo ";
//		cout << i;
//		cout << "\n";
//		cout << "Ingrese la medida de la base: ";
//		cin >> base;
//		cout << "Ingrese la medida de la altura: ";
//		cin >> altura;
//
//		int superficie;
//		superficie = (base * altura) / 2;
//
//		cout << "La medida de su base es: ";
//		cout << base;
//		cout << "\n La medida de su altura es: ";
//		cout << altura;
//		cout << "\n La medida de su superficie es: ";
//		cout << superficie;
//		cout << "\n";
//
//		if (superficie > 12)
//		{
//			superficieMayor12 = superficieMayor12 + 1;
//		}
//	}
//
//	cout << "La cantidad de triangulos con superficie mayor a 12 es: ";
//	cout << superficieMayor12;
//}