//#include <iostream>
//#include <string>
//#include "Fecha.cpp"
//
//using namespace std;
//
//class Cita
//{
//public:
//	Cita(string m1, string m2, string l, int ano, int mes, int dia, int hora);
//	void Imprimir();
//	friend class ClaseExterna;
//
//private:
//	string miembro1, miembro2;
//	string lugar;
//	Fecha fecha = Fecha(0,0,0,0);
//};
//Cita::Cita(string m1, string m2, string l, int ano, int mes, int dia, int hora)
//{
//	miembro1 = m1;
//	miembro2 = m2;
//	lugar = l;
//	fecha = Fecha(ano, mes, dia, hora);
//}
//
//void Cita::Imprimir()
//{
//	cout << "Cita de " << miembro1 << " y " << miembro2 << " en " << lugar << ". Fecha ";
//	fecha.Imprimir();
//}

//class ClaseExterna
//{
//public:
//	ClaseExterna();
//	void CrearCita(string m1, string m2, string l, int ano, int mes, int dia, int hora);
//	void ConsultarCita(int pos);
//private:
//	int cant = 0;
//	Cita citas[10];
//};
//
//ClaseExterna::ClaseExterna()
//{
//	
//}
//
//void ClaseExterna::CrearCita(string m1, string m2, string l, int ano, int mes, int dia, int hora)
//{
//	Fecha fecha = Fecha(ano, mes, dia, hora);
//	
//	if (cant < 10 && fecha.Validar())
//	{
//		Cita nueva = Cita(m1, m2, l, fecha);
//		citas[cant] = nueva;
//		cant++;
//	}
//	else {
//		cout << "No se pudo crear la cita";
//	}
//}
//
//void ClaseExterna::ConsultarCita(int pos)
//{
//	if (pos <= cant)
//	{
//		citas[pos].Imprimir();
//	}
//	cout << "No se pudo consultar la cita";
//}