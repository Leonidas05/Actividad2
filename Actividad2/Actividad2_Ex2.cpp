// Actividad2_Ex2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Crea un programa que lea una lista de números enteros de tamaño N y los ordene de
//menor a mayor utilizando estructuras de control como bucles y condicionales.


#include <iostream>

int Cantidad;
void Mostrar_Lista(int Lista[]);
void Ordenar_Menor_Mayor(int Lista[]);

void Mostrar_Lista(int Lista[]) {
	for (int i = 0; i < Cantidad; i++) {
		std::cout << Lista[i] << " ";
	}
	std::cout << "\n";
}

void Ordenar_Menor_Mayor(int Lista[]) {
	int aux;
	for (int i = 0; i < Cantidad; i++) {
		for (int x = 0; x < Cantidad; x++)
			if (Lista[x] > Lista[x + 1]) {
				aux = Lista[x];
				Lista[x] = Lista[x + 1];
				Lista[x + 1] = aux;
			}
	}
	for (int j = 0; j < Cantidad; j++) {
		std::cout << Lista[j] << " ";
	}
	std::cout << "\n";
}
int main(int argc, char** argv) {

	std::cout << "Este programa te pide una cantidad de numeros que desees y lo ordena de menor a mayor\n";
	std::cout << "¿Cuantos Numeros desea ingresar?\n";
	std::cin >> Cantidad;

	int Numeros[Cantidad];
	for (int i = 0; i < Cantidad; i++) {
		std::cout << "Dame un numero: \n";
		std::cin >> Numeros[i];
	}
	std::cout << "La lista sin ordenar es: \n";
	Mostrar_Lista(Numeros);

	std::cout << "La lista ordenada de menor a mayor es: \n";
	Ordenar_Menor_Mayor(Numeros);
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
