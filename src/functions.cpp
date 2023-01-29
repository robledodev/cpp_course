#include <iostream>

using namespace std;

// Una función se define antes del main.
// Pero se puede declarar antes y definirla después.

// float getAbsolutValue(float value);
void getAbsolutValue(float& value);
// float getAbsolutValue(const float& value);

int main() {
    float value;

    cout << "Introduce un valor: ";
    cin >> value;

    getAbsolutValue(value); // Llamada

    cout << "El valor absoluto es " << value << endl;

    return 0;
}
/*
float getAbsolutValue(float value) { // parámetros
    return value >= 0 ? value : -value;
}*/
/*
void getAbsolutValue(float& value) { // parámetros
    if(value < 0) {
        value = -value;
    }
}
*/
/*
float getAbsoluteValue(const float& value) { // parámetros
    return value >= 0 ? value : -value;
}
*/

// Objetivo: Encapsular diferentes tareas específicas

// Ventajas:
//      - Mejorar la legibilidad
//      - Ayuda a estructurar los programas
//      - Evita repetir el mismo código / Se puede reutilizar
//      - Permite construir los programas por niveles de abstracción

// Función VS Acción
// Función siempre retorna un valor (int, float, string, etc.)
//      - Tipo de devolución via return.
// Acción nunca retorna nada (void)
//      - Tipo de devolución via modificación de parámetros

// Tipos de parámetro
//      - Por valor (no modificable)
//      - Por referencia (modificable)
//      - Por referencia constante (no modificable)