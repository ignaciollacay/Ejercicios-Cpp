#include<iostream>

using namespace std;

int main()
{
    
}
// /*
int esNavidad()
{
    int dia, mes;
    cout << "Ingrese el dia de la fecha: ";
    cin >> dia;
    cout << "Ingrese el mes de la fecha: ";
    cin >> mes;

    if (dia == 25 && mes == 12)
    {
        cout << "Es navidad";
    }
    else
    {
        cout << "No es navidad";
    }

    return 0;
}

int SonIguales()
{
    int num1, num2, num3;
    cout << "Ingrese primer valor: ";
    cin >> num1;
    cout << "Ingrese segundo valor: ";
    cin >> num2;
    cout << "Ingrese tercer valor: ";
    cin >> num3;

    if (num1 == num2 && num1 == num3)
    {
        int suma;
        suma = num1 + num2;
        cout << "La suma del primer valor con el segundo valor es: ";
        cout << suma;
        cout << "\n";
        int producto;
        producto = suma * 3;
        cout << "Su resultado multiplicado por el tercer valor: ";
        cout << producto;
    }
    return 0;
}
int TodosMenoresADiez()
{
        int num1, num2, num3;
    cout << "Ingrese primer valor: ";
    cin >> num1;
    cout << "Ingrese segundo valor: ";
    cin >> num2;
    cout << "Ingrese tercer valor: ";
    cin >> num3;

    if (num1 < 10 && num2 < 10 && num3 < 10)
    {
        cout << "Todos los números son menores a diez";
    }
    return 0;
}
int AlgunoMenorADiez()
{
    int num1, num2, num3;
    cout << "Ingrese primer valor: ";
    cin >> num1;
    cout << "Ingrese segundo valor: ";
    cin >> num2;
    cout << "Ingrese tercer valor: ";
    cin >> num3;

    if (num1 < 10 || num2 < 10 || num3 < 10)
    {
        cout << "Alguno de los números es menor a diez";
    }
    return 0;
}
int IdentificarCuadrante()
{
    int x, y;
    int coordenada;
    cout << "Ingrese el valor x de la coordenada: ";
    cin >> x;
    cout << "Ingrese el valor y de la coordenada: ";
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << "Cuadrante 1";
    }
    if (x < 0 && y > 0)
    {
        cout << "Cuadrante 2";
    }
    if (x > 0 && y < 0)
    {
        cout << "Cuadrante 3";
    }
    if (x < 0 && y < 0)
    {
        cout << "Cuadrante 4";
    }
}
int AjusteSalarial()
{
    int sueldo, antiguedad;
    cout << "Ingrese su sueldo: ";
    cin >> sueldo;
    cout << "Ingrese su antiguedad: ";
    cin >> antiguedad;

    int aumento;

    if (sueldo >= 500)
    {
        cout << "Su sueldo actual es: ";
        cout << sueldo;
    }
    else
    {
        if (sueldo < 500 && antiguedad >= 10)
        {
            aumento = sueldo * 0.2;
            int nuevoSueldo = sueldo + aumento;
            cout << "Otorgarle un aumento del 20%: ";
            cout << nuevoSueldo;
        }
        if (sueldo < 500 && antiguedad <= 10)
        {
            aumento = sueldo * 0.05;
            int nuevoSueldo = sueldo + aumento;
            cout << "Otorgarle un aumento del 5%: ";
            cout << nuevoSueldo;
        }
    }

    return 0;
}
int RangoVariacion()
{
    int num1, num2, num3;
    cout << "Ingrese primer valor: ";
    cin >> num1;
    cout << "Ingrese segundo valor distinto: ";
    cin >> num2;
    cout << "Ingrese tercer valor distinto: ";
    cin >> num3;

    int mayor, menor;

    if (num1 > num2 && num1 > num3)
    {
        mayor = num1;
        if (num2 < num3)
        {
            menor = num2;
        }
        else if (num3 < num2)
        {
            menor = num3;
        }
        else
        {
            menor = 0;
            cout << "Ingrese tres valores distintos.";
        }
    }
    else
    {
        if (num2 > num3)
        {
            mayor = num2;

            if (num1 < num3)
            {
                menor = num1;
            }
            else if (num3 < num1)
            {
                menor = num3;
            }
            else
            {
                menor = 0;
                cout << "Ingrese tres valores distintos.";
            }
        }
        else
        {
            mayor = num3;

            if (num1 < num2)
            {
                menor = num1;
            }
            else if (num1 > num2)
            {
                menor = num2;
            }
            else
            {
                menor = 0;
                cout << "Ingrese tres valores distintos.";
            }
        }
    }

    cout << "Rango variacion: ";
    cout << menor;
    cout << " - ";
    cout << mayor;

    return 0;
}
*/
