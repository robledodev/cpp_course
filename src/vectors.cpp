/*#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> v);

int main() {

    //Declaration
    vector<int> numbers(5, 5); // n = size, x = initialization
    numbers[0] = 23;

    // Añadir al final
    numbers.push_back(6);
    numbers.push_back(77);
    //printVector(numbers);

    // Eliminar elemento del final
    numbers.pop_back();
    //printVector(numbers);

    // Limpiar vector
    //numbers.clear();
    //printVector(numbers);

    // Comprobar si esta vacio
    if(!numbers.empty()) {
        cout << "El vector no esta vacio" << endl;
    } else {
        cout << "El vector esta vacio" << endl;
    }

    return 0;
}

void printVector(vector<int> v) {
    for(int i = 0; i < v.size(); i++) {
        cout << "Position " << i << ": " << v[i] << endl;
    }
    cout << "Size: " << v.size() << endl;
}*/

// Tablas
// -> Tienen una longitud máxima (Obligación de guardar en memoria)
// -> Se accede por indice
//
// Vectores
// -> No tienen una longitud predefinida
// -> Se accede por indice