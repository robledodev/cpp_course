/*#include <iostream>

using namespace std;

// Una función se define antes del main.
// Pero se puede declarar antes y definirla después.

// float getAbsoluteValue(float value);
void getAbsoluteValue(float& value);
// float getAbsoluteValue(const float& value);

int main() {
    float value;

    cout << "Introduce un valor: ";
    cin >> value;

    getAbsoluteValue(value); // Llamada

    cout << "El valor absoluto es " << value << endl;

    return 0;
}
/*
float getAbsoluteValue(float value) { // parámetros
    return value >= 0 ? value : -value;
}*/
/*
void getAbsoluteValue(float& value) { // parámetros
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