/*
 * Programa que calcula la suma o el producto de 2 n�meros.
 */
#include<iostream>
#include <sstream>
using namespace std;

int main( )
{ 	
	// Configuraci�n
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int a, b;
	int c; 
	stringstream reporte; // Es un buffer
	
	// Lectura de datos
	cout<<"Ingrese valor de primer n�mero:\t\t"; cin>>a;
	cout<<"Ingrese valor de segundo n�mero:\t";  cin>>b;

	// Proceso
	if( a>0 && b>0 )
	{
		c = a + b;
		reporte << "La suma es:\t\t\t\t" << c << "\n";
	}
	else
	{
		c = a * b;
		reporte << "La multiplicaci�n es:\t\t\t" << c << "\n";
	}
	
	// Reporte
	cout << endl;
	cout << reporte.str() << endl;
	
	// Fin
	return 0;
}



