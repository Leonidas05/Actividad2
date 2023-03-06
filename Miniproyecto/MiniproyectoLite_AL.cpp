// MiniproyectoLite_AL.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include<stdlib.h>
#include<time.h>
#include<string>
#include <iostream>

using namespace std;

int main()
{
    int intentos = 5;
    int min, max, val;
    
    cout << "Bienvenido a adivina el numero"<< endl;
    cout << "Dame el limite infierior para generarlo" << endl;
    cin >> min;
    cout << "Dame el limite superior para generarlo" << endl;
    cin >> max;
    srand(time(NULL));
    int num = rand() % max + min;
    int* apv = &num;
    do {
        cout << "Por favor, introduce un num:";
        cin >> val;
        intentos--;
        if (val > *apv)// Cuando el número de entrada es mayor que el número aleatorio
        {
            cout << "Te pasaste, intenta un num mas chico" << endl;// El aviso es demasiado grande
            cout << "Te quedan " << intentos << " intentos"<< endl;
        }
        else if (val < *apv)// Cuando el número de entrada es menor que el número aleatorio
        {
            cout << "Estas por debajo, intenta un num mas grande" << endl;// El aviso para perder es demasiado pequeño
            cout << "Te quedan " << intentos << " intentos" << endl;
        }
        else
        {
            cout << "Felicidades, le atinaste" << endl;
            return 0;
        }
    } while (intentos>0);
    cout << "Perdiste, el valor era: " << *apv<< endl;
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
