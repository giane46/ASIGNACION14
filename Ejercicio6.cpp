// ConsoleApplication91.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	int x = 1;
	int n;
	double f;
	double sumaF = 0;

	cout << "Serie: 1/f + 1/3f + 1/6f + 1/9f" << endl;
	cout << "Ingrese valor para f: ";
	cin >> f;
	cout << "Ingrese cantidad de terminos: ";
	cin >> n;

	if (n < 0 || f < 0) {
		cout << "ERROR. INGRESE UN NUMERO VALIDO." << endl;
	}
	else {
		while (i <= n) {
			sumaF = sumaF + 1 / (f*x);

			x = 3 * i;

			i++;
		}

		cout << "Suma de terminos: " << sumaF << endl;
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
