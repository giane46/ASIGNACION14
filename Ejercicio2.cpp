// ConsoleApplication87.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int b = 1;
	int n;
	int sumaB = 0;

	cout << "La serie es: 1+4+9+16+25+...";

	cout << "Ingrese numero de terminos: ";
	cin >> n;

	if (n < 0 || a < 0) {
		cout << "ERROR. INGRESE UN NUMERO VALIDO." << endl;
	}
	else {
		while (b <= n) {

			sumaB = sumaB + pow(b, 2);

			b++;
		}

		cout << "El numero de terminos es: " << n << endl;
		cout << "La suma de terminos es: " << sumaB << endl;
	}
	
	system("pause");
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
