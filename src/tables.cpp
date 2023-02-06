#include <iostream>

using namespace std;

void initializeTable();

int main() {

    // Declaration
    /*
    int table[3]; // El 3 es la longitud (0 - 2)

    table[0] = 23;
    table[1] = 45;
    table[2] = 99;
    table[3] = 56;*/

    // Initialization
    double table[5] = {0.3, 0.8, 3.3, 9.45, 1.4};

    // Escribir un subprograma que declare una tabla de 500 enteros
    // y que la llene del 500 al 1 de forma descendente
    //initializeTable();

    // Strings
    string name = "Robledo";
    cout << "La primera letra es: " << name[0] << endl;

    // Strings size
    size_t size = name.size();
    cout << "La longitud del nombre es: " <<  size << endl;

}

void initializeTable() {

    int table[500];

    int i = 500;

    while(i > 0) {
        table[i - 1] = 500 - i + 1;
        i--;
    }

    cout << "Posicion 1: " << table[0] << endl;
    cout << "Posicion 500: " << table[499] << endl;
    cout << "Posicion 38: " << table[37] << endl;

}


//  Datos simples (int, float, char...)
//      -> Nivel limitado de complejidad
//      -> Información homogénea
//
//  Tablas
//      -> Entidades más complejas
//      -> Información heterogénea
//          |-> Agrupación de variables del mismo tipo
//          |-> Accesible desde un indice (0 a N)
//          |-> Puede ser de 1 a N dimensiones