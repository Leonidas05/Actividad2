// Actividad3_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
	double Calificacion;
	string Nombre;
	string Identificacion;
	Estudiante* Siguiente;
};

void Agregar_Estudiante(Estudiante*&, double, string, string);
void Actualizar_Calificacion_Estudiante(Estudiante*);
void Buscar_Estudiante_Identificacion(Estudiante*, string);
void Mostrar_Lista_Estudiantes(Estudiante*);

void Mostrar_Lista_Estudiantes(Estudiante* Lista) {
	int Numero_Estudiantes = 0;
	while (Lista != NULL) {
		Numero_Estudiantes++;
		cout << "\nEstudiante " << Numero_Estudiantes << ": \nNombre: " << Lista->Nombre << "\nIdentificacion: " << Lista->Identificacion << "\nCalificacion: " << Lista->Calificacion << "\n\n";
		Lista = Lista->Siguiente; 
	}
}
int main(int argc, char** argv) {

	Estudiante* Lista = NULL;
	double Calificacion;
	string Nombre, Identificacion;
	int opcion = 0, AuxOpcion;

	do {
		cout << "Menu: \n1. Agregar Nuevo Estudiante\n2. Actualizar Calificacion de Estudiante\n3. Buscar Estudiante por Identificacion\n4. Mostrar Lista de Estudiantes\n";
		cout << "\nPara terminar el prorama escriba 0\n";
		cout << "Selecciona una opcion: \n";
		cin >> opcion;
		switch (opcion) {
		case 0:
			break;

		case 1:
			do {
				cout << "\nAgregar estudiante: \n";
				cout << "\nNombre: \n";
				cin >> Nombre;
				cout << "\nIdentificacion: \n";
				cin >> Identificacion;
				cout << "\nCalificacion: \n";
				cin >> Calificacion;

				Agregar_Estudiante(Lista, Calificacion, Nombre, Identificacion);

				cout << "\nQuiere agregar otro Estudiante?\n1. Si\n2. No\n:";
				cin >> AuxOpcion;
			} while (AuxOpcion == 1);
			break;

		case 2:
			do {
				cout << "\nActualizar calificacion de estudiante: \n";
				Actualizar_Calificacion_Estudiante(Lista);

				cout << "\nQuiere actualizar otra calificacion de Estudiante?\n1. Si\n2. No\n:";
				cin >> AuxOpcion;
			} while (AuxOpcion == 1);
			break;

		case 3:
			do {
				cout << "\nBuscar estudiante: \n";
				cout << "\nDame la Identificacion del estudiante a buscar: \n";
				cin >> Identificacion;

				Buscar_Estudiante_Identificacion(Lista, Identificacion);

				cout << "\nQuiere buscar otro Estudiante?\n1. Si\n2. No\n:";
				cin >> AuxOpcion;
			} while (AuxOpcion == 1);
			break;
		case 4:
			cout << "Lista de Estudiantes: \n";
			Mostrar_Lista_Estudiantes(Lista);
			break;

		default:
			cout << "Dame una opcion valida!";
		}
	} while (opcion != 0);
	return 0;
}



void Agregar_Estudiante(Estudiante*& Lista, double Calificacion, string Nombre, string Identificacion) {
	Estudiante* Nuevo_Estudiante = new Estudiante();
	Estudiante* Aux;

	Nuevo_Estudiante->Calificacion = Calificacion;
	Nuevo_Estudiante->Nombre = Nombre;
	Nuevo_Estudiante->Identificacion = Identificacion;
	Nuevo_Estudiante->Siguiente = NULL;

	if (Lista == NULL) {
		Lista = Nuevo_Estudiante;
	}else {
		Aux = Lista;
		while (Aux->Siguiente != NULL) {
			Aux = Aux->Siguiente;
		}Aux->Siguiente = Nuevo_Estudiante;
	}
	cout << "\nSe ha agregado un nuevo estudiante: \nNombre: " << Nombre << "\nIdentificacion: " << Identificacion << "\nCalificacion: " << Calificacion << "\n\n";
}

void Actualizar_Calificacion_Estudiante(Estudiante* Lista) {
	int Numero_Estudiante = 0;
	double Calificacion;

	Mostrar_Lista_Estudiantes(Lista);
	cout << "Cual estudiante quiere actualizar? \n";
	cin >> Numero_Estudiante;

	int Numero_Estudiantes = 0;
	while (Lista != NULL) {
		Numero_Estudiantes++;
		if (Numero_Estudiantes == Numero_Estudiante) {
			cout << "\n\nNueva calificacion: \n";
			cin >> Calificacion;
			Lista->Calificacion = Calificacion; 
		}Lista = Lista->Siguiente; 
	}
	cout << "\nSe ha actualizado el Estudiante " << Numero_Estudiante << "\n";
}

void Buscar_Estudiante_Identificacion(Estudiante* Lista, string Identificacion) {
	int Numero_Estudiantes = 0;
	while (Lista != NULL) {
		Numero_Estudiantes++;
		if (Identificacion == Lista->Identificacion) {
			cout << "Estudiante " << Numero_Estudiantes << ": \nNombre: " << Lista->Nombre << "\nIdentificacion: " << Lista->Identificacion << "\nCalificacion: " << Lista->Calificacion;
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
