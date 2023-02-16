/*#include <iostream>

using namespace std;

int main() {

    int matrixSize;
    cout << "Introduce el tamaño de la matriz: ";
    cin >> matrixSize;

    cout << endl;

    int m[matrixSize][matrixSize];

    for(int i = 0; i < matrixSize; i++) {
        for(int j = 0; j < matrixSize; j++) {
            cout << "Valor para la Fila " << i + 1 << ", Columna " << j + 1 << ": ";

            int value;
            cin >> value;
            m[i][j] = value;

            cout << endl;
        }
    }

    bool isAntisymmetric = true;
    bool correctDiagonal = true;
    int firstElement = m[0][0];

    for(int i = 0; i < matrixSize; i++) {
        for(int j = 0; j < matrixSize; j++) {
            if(i != j) {
                if(m[i][j] != -m[j][i]) {
                    isAntisymmetric = false;
                }
            } else {
                if(m[i][j] != firstElement) {
                    correctDiagonal = false;
                }
            }
        }
    }

    if(isAntisymmetric && correctDiagonal) {
        cout << "SI, la matriz es antisimetrica y todos los elementos de la diagonal son iguales" << endl;
    }

    if(isAntisymmetric && !correctDiagonal) {
        cout << "NO, los elementos de la diagonal no son iguales" << endl;
    }

    if(!isAntisymmetric && correctDiagonal) {
        cout << "NO, la matriz no es antisimetrica" << endl;
    }

    if(!isAntisymmetric && !correctDiagonal) {
        cout << "NO, la matriz no es antisimetrica ni los elementos de la diagonal no son iguales" << endl;
    }

    return 0;
}*/
