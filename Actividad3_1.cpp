// Actividad3_1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

struct Nodo {
	int Num;
	Nodo* Siguiente;
};

void NuevoNum_Lista(Nodo*&, int);
void Mostrar_Lista(Nodo*);
void Mostrar_Mayor(Nodo*, int&);
void Mostrar_Menor(Nodo*, int&);

void NuevoNum_Lista(Nodo*& Lista, int Num) {
	Nodo* Nuevo_Nodo = new Nodo();
	Nodo* Aux;

	Nuevo_Nodo->Num = Num;
	Nuevo_Nodo->Siguiente = NULL;

	if (Lista == NULL) {
		Lista = Nuevo_Nodo;
	}
	else {
		Aux = Lista;
		while (Aux->Siguiente != NULL) {
			Aux = Aux->Siguiente;
		}
		Aux->Siguiente = Nuevo_Nodo;
	}
}

void Mostrar_Lista(Nodo* Lista) {
	while (Lista != NULL) {
		cout << Lista->Num << " ";
		Lista = Lista->Siguiente;
	}
}

int main(int argc, char** argv) {
	Nodo* Lista = NULL;
	int Num, Opcion = 1, Menor = 9999, Mayor = 0, NumRango;

	do {
		cout << "Dame un numero: \n";
		cin >> Num;
		NuevoNum_Lista(Lista, Num); 
		cout << "Desea continuar?\n1. Si\n2. No\n";
		cin >> Opcion;
	} while (Opcion == 1);

	Mostrar_Mayor(Lista, Mayor);
	Mostrar_Menor(Lista, Menor);
	cout << "\nEl mayor de la lista es: " << Mayor;
	cout << "\nEl menor de la lista es: " << Menor;

	cout << "\nDame un numero con el cual verificar si esta en el rango del mayor y menor: \n";
	cin >> NumRango;

	if (NumRango > Menor && NumRango < Mayor) {
		cout << "\nSi esta en el rango\n";
	}
	else {
		cout << "\nNo esta en el rango\n";
	}
	return 0;
}

void Mostrar_Menor(Nodo* Lista, int& Menor) {
	while (Lista != NULL) {
		if (Lista->Num < Menor) {
			Menor = Lista->Num; 
		} Lista = Lista->Siguiente; 
	}
}
void Mostrar_Mayor(Nodo* Lista, int& Mayor) {

	while (Lista != NULL) {
		if (Lista->Num > Mayor) {
			Mayor = Lista->Num;
		}Lista = Lista->Siguiente; 
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
