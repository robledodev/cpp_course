/*#include <iostream>
#include <vector>

using namespace std;

// Declaracion estructura
struct date {
    int day;
    int month;
    int year;
};

// Estructuras de tablas
struct article {
    string title;
    string words[10];
    int lines;
};

// Estructuras de vectores
struct article {
    string title;
    vector<string> words;
    int lines;
};

// Estructuras de estructuras
struct article {
    string title;
    vector<string> words;
    int lines;
    date d;
};

void printStruct(const date& s);
void printTable(date t[5], int size);
void printVector(vector<date> v);

int main() {

    // Declaracion de variable
    date birthday = {};

    // Acceso e inicializacion
    birthday.day = 23;
    birthday.month = 5;
    birthday.year = 1980;

    // Declaracion e inicializacion
    date event = {19, 7, 2020};

    // Asignaciones
    date s1 = {19,2,2015}, s2 = {};
    vector<date> v1(3, event), v2;
    date t1[2], t2[2];

    // Permitido
    s2 = s1;
    //printStruct(s2);

    v2 = v1;
    //printVector(v2);

    // No permitido
    //t2 = t1;

    // Tablas de estructuras
    date tDate[2];

    tDate[0].day = 5;
    tDate[0].month = 1;
    tDate[0].year = 2001;

    tDate[1].day = 25;
    tDate[1].month = 8;
    tDate[1].year = 2014;
    //printTable(tDate, 2);

    // Vectores de estructuras
    vector<date> vDate;
    date d = {2,2,2022};
    vDate.push_back(d);

    //printVector(vDate);

    return 0;
}

void printStruct(const date& s) {
    cout << "Estructura" << endl;
    cout << "----------" << endl;
    cout << "La fecha es: " << s.day << "/" << s.month << "/" << s.year << endl;
    cout << endl;
}

void printTable(date t[5], int size) {
    cout << "Tabla" << endl;
    cout << "-----" << endl;
    for(int i = 0; i < size; i++) {
        cout << "Elemento " << i << ": La fecha es: " << t[i].day << "/" << t[i].month << "/" << t[i].year << endl;
    }
    cout << endl;
}

void printVector(vector<date> v) {
    cout << "Vector" << endl;
    cout << "------" << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << "Elemento " << i << ": La fecha es: " << v[i].day << "/" << v[i].month << "/" << v[i].year << endl;
    }
    cout << endl;
}*/

// Estructuras
// -> Agrupación de variables (pueden ser de diferentes tipos)
// -> Campo = Cualquiera de las variables individuales que forman la estructura
// -> Sirven para tratar como entidad unica un conjunto de datos heterogeneos
// -> El paso por parametros de una tupla puede ser mucho mas costosa por su copia,
//    por ello se usa el paso por referencia
//
// Estructuras vs Tablas
// -> Estructura = Acceso por campo
// -> Tabla = Acceso por indice