// Actividad2_Ex3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>

int main(int argc, char* argv) {
	char Cadena[100];
	std::cout << "Dame una cadena: \n";
	std::cin.getline(Cadena, 30, '\n');

	int Palabras = 0, Caracteres = 0;
	for (int i = 0; Cadena[i] != '\0'; i++) {
		if (Cadena[i-1] == ' ' && isalpha(Cadena[i])) {
			Palabras++;
		}																
		Caracteres++;
	}
	if (isalpha(Cadena[0])) {
		Palabras++;
	}
	std::cout << "El numero de palabras que tiene la cadena es de: " << Palabras << "\n";
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
