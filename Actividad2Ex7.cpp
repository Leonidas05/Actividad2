// Actividad2Ex7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdlib.h>
#include <time.h>
#include<iostream>

int main(int argc, char* argv) {

    int NumeroAleatorio, Numero;
    srand(time(NULL));

    NumeroAleatorio = 1 + rand() % 100;

    do {
        std::cout << "Dame un numero: ";
        std::cin >> Numero;
        if (Numero > NumeroAleatorio) {
            std::cout << "Menor menor!\nIntenta nuevamente :)\n";
        }
        if (Numero < NumeroAleatorio) {
            std::cout << "Mayor mayor!\nIntenta nuevamente :)\n";
        }

    } while (NumeroAleatorio != Numero);
    std::cout << "OMEDETTO, El numero aleatorio era efectivamente: " << NumeroAleatorio;
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
