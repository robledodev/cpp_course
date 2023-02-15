#include <iostream>
#include <vector>

using namespace std;

typedef int matrix [2][2];

void print(matrix m);
void print(vector< vector<int> > m);

int main() {

    // Declaracion
    matrix m1;
    //m1[0][0] = 0;

    // Inicializacion
    for(int i = 0; i < 2; i++) { // filas
        for(int j = 0; j < 2; j++) { //columnas
            m1[i][j] = 0;
        }
    }
    //print(m1);

    // Declaracion e inicializacion
    vector<int> v(2,1);
    vector< vector<int> > m2(2, v);
    print(m2);

    return 0;
}

void print(matrix m) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Fila " << i + 1 << ", Columna " << j + 1 << ": " << m[i][j] << endl;
        }
    }
}

void print(vector< vector<int> > m) {
    for(int i = 0; i < m.size(); i++) {
        for(int j = 0; j < m[i].size(); j++) {
            cout << "Fila " << i + 1 << ", Columna " << j + 1 << ": " << m[i][j] << endl;
        }
    }
}

// Matrices
// -> Lo mismo que una tabla, pero con doble dimension (o indice)
// -> Es importante que no se sobrepasen los limites
//
// Tablas vs Matrices
// -> Tablas = 1 dimension, Matrices = 2 dimensiones
// -> Recorrido tablas = 1 bucle, Recorrido matrices = 2 bucles