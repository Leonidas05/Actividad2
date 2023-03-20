// Colas3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <queue>
#include <unordered_set>

using namespace std;

void removeDuplicates(queue<int>& q) {
	unordered_set<int> elementos_vistos;
	queue<int> newq;

	while (!q.empty()) {
		int elemento_actual = q.front();
		q.pop();
		if (elementos_vistos.find(elemento_actual) == elementos_vistos.end()) {
			newq.push(elemento_actual);
			elementos_vistos.insert(elemento_actual);
		}
	}q = newq;
}

void printQueue(queue<int>& q) {
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

int main()
{
	queue<int> q({ 1,3,2,6,9,8,5,7,4,1,2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2,1 });
	cout << "Cola original: ";
	printQueue(q);
	q = queue<int>({ 1,3,2,6,9,8,5,7,4,1,2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2,1 });
	removeDuplicates(q);
	cout << "Cola sin elementos repetidos: "<<endl;
	printQueue(q);
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
