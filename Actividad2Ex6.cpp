// Actividad2Ex6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

struct Estudiante {
	double Calificacion1;
	double Calificacion2;
	double Calificacion3;
	double Calificacion4;
	double Calificacion5;
	char* Nombre;

	Estudiante* Siguiente;
};


void Agregar_Estudiante(Estudiante*&, double, double, double, double, double);
void Mostrar_Promedios(Estudiante*);
void Mostrar_Calificaciones(Estudiante*);
int contador = 0;

void Agregar_Estudiante(Estudiante*& Lista, double calif1, double calif2, double calif3, double calif4, double calif5) {
	Estudiante* Nuevo_Estudiante = new Estudiante();
	Nuevo_Estudiante->Calificacion1 = calif1;
	Nuevo_Estudiante->Calificacion2 = calif2;
	Nuevo_Estudiante->Calificacion3 = calif3;
	Nuevo_Estudiante->Calificacion4 = calif4;
	Nuevo_Estudiante->Calificacion5 = calif5;

	Nuevo_Estudiante->Siguiente = Lista;
	Lista = Nuevo_Estudiante;

	std::cout << "\nSe ha agregado un nuevo estudiante con calificaciones: \n";
	std::cout << "Calificacion 1: " << calif1 << "\n";
	std::cout << "Calificacion 2: " << calif2 << "\n";
	std::cout << "Calificacion 3: " << calif3 << "\n";
	std::cout << "Calificacion 4: " << calif4 << "\n";
	std::cout << "Calificacion 5: " << calif5 << "\n";
}
void Mostrar_Promedios(Estudiante* Lista) {
	Estudiante* Actual = new Estudiante();
	Actual = Lista;
	int count = contador;
	double promedio = 0;

	while (Actual != NULL) {
		promedio = (Actual->Calificacion1 + Actual->Calificacion2 + Actual->Calificacion3 + Actual->Calificacion4 + Actual->Calificacion5) / 5;
		std::cout << "El estudiante numero " << count << " tiene un promedio de: " << promedio << "\n";

		count--;
		Actual = Actual->Siguiente;
	}
}

void Mostrar_Calificaciones(Estudiante* Lista) {
	Estudiante* Actual = new Estudiante();
	Actual = Lista;
	int count = contador;

	while (Actual != NULL) {
		std::cout << "El estudiante numero " << count << ", sus calificaciones son: \n";
		std::cout << "Calificacion 1: " << Actual->Calificacion1 << "\n";
		std::cout << "Calificacion 2: " << Actual->Calificacion2 << "\n";
		std::cout << "Calificacion 3: " << Actual->Calificacion3 << "\n";
		std::cout << "Calificacion 4: " << Actual->Calificacion4 << "\n";
		std::cout << "Calificacion 5: " << Actual->Calificacion5 << "\n";

		count--;
		Actual = Actual->Siguiente;
	}
}
int main(int argc, char* argv) {

	Estudiante* Lista = NULL;
	double calif1, calif2, calif3, calif4, calif5;
	int opcion = 0;

	std::cout << "Este programa agrega estudiantes con 5 calificaciones y te da sus promedios\n\n";
	do {
		contador++;
		std::cout << "\nNUEVO ESTUDIANTE: \n";
		std::cout << "Dame su calificacion 1: \n";
		std::cin >> calif1;
		std::cout << "Dame su calificacion 2: \n";
		std::cin >> calif2;
		std::cout << "Dame su calificacion 3: \n";
		std::cin >> calif3;
		std::cout << "Dame su calificacion 4: \n";
		std::cin >> calif4;
		std::cout << "Dame su calificacion 5: \n";
		std::cin >> calif5;

		Agregar_Estudiante(Lista, calif1, calif2, calif3, calif4, calif5);

		std::cout << "Quiere agregar otro Estudiante?\n1. Si\n2. No\n:";
		std::cin >> opcion;

	} while (opcion == 1);
	std::cout << "Los Estudiantes agregados son: \n\n";
	Mostrar_Calificaciones(Lista);

	std::cout << "Los promedios de los estudiantes agregados son: \n\n";
	Mostrar_Promedios(Lista);

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
