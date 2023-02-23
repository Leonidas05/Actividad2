// Actividad2Ex4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

void Llenar_Matriz();
void Mostrar_Matriz();
int Suma_Diagonal();

int** Matriz_Punteada, Dimension;

void Llenar_Matriz() {

	Matriz_Punteada = new int* [Dimension];
	for (int i = 0; i < Dimension; i++) {
		Matriz_Punteada[i] = new int[Dimension];
	}
	for (int i = 0; i < Dimension; i++) {
		for (int j = 0; j < Dimension; j++) {
			std::cout << "Ingresa el dato[" << i << "] [" << j << "]: ";
			std::cin >> *(*(Matriz_Punteada + i) + j);
		}
	}
}

int Suma_Diagonal() {
	int Suma = 0;

	for (int i = 0; i < Dimension; i++) {
		for (int j = 0; j < Dimension; j++) {
			if (i == j) {
				Suma = Suma + *(*(Matriz_Punteada + i) + j);
			}
		}std::cout << "\n";
	}return Suma;
}

void Mostrar_Matriz() {
	std::cout << "\nEsta es la matriz: \n";
	for (int i = 0; i < Dimension; i++) {
		for (int j = 0; j < Dimension; j++) {
			std::cout << *(*(Matriz_Punteada + i) + j) << " ";
		}std::cout << "\n";
	}
}


int main(int argc, char* argv) {

	std::cout << "\nDame la dimension de la matriz cuadrada: ";
	std::cin >> Dimension;
	Llenar_Matriz();
	Mostrar_Matriz();
	std::cout << "\nL suma de la matriz es: " << Suma_Diagonal() << "\n";
	for (int i = 0; i < Dimension; i++) {
		delete[] Matriz_Punteada[i];
	}
	delete[] Matriz_Punteada;
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
