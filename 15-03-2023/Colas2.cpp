// Colas2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void ReverseQueue(queue<int>& Cola1) {
	stack<int> pila;
	while (Cola1.empty() != true) {
		pila.push(Cola1.front());
		Cola1.pop();
	}
	while (pila.empty() != true) {
		Cola1.push(pila.top());
		pila.pop();
	}
}

void printQueue(queue<int>& Cola1) {
	stack<int> pila;
	while (Cola1.empty() != true) {
		cout << Cola1.front()<<endl;
		Cola1.pop();
	}
}

int main()
{
	queue<int> Cola1;
	Cola1.push(1);
	Cola1.push(2);
	Cola1.push(3);
	Cola1.push(4);
	Cola1.push(5);
	ReverseQueue(Cola1);
	printQueue(Cola1);
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
