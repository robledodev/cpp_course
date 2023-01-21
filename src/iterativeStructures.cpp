#include <iostream>

using namespace std;

int main() {

    // Iterative Structures
    int iterations;

    cout << "Numero de iteraciones: ";
    cin >> iterations;

    // For
    for (int i = 0; i < iterations; i++) {
        cout << "Iteration: " << i << endl;
    }

    // While
    int j = 0;
    while (j < iterations) {
        cout << "Iteration: " << j << endl;
        j++;
    }

    // Do-While
    int k = 0;
    do {
        cout << "Iterations: " << k << endl;
        k++;
    } while(k < iterations && k < 3);
}
