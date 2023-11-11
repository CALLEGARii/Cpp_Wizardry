#include "Triangulo.h"
#include <iostream>

using namespace std;

Triangulo::Triangulo() {
}

Triangulo::Triangulo(const Triangulo& orig) {
}

Triangulo::~Triangulo() {
}

void Triangulo::verificarTriangulo(double x, double y, double z) {
    if (x <= 0 || y <= 0 || z <= 0) {
        cout << "Os valores não podem formar um triângulo." << endl;
    } else if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            cout << "Triângulo Equilátero." << endl;
        } else if (x == y || x == z || y == z) {
            cout << "Triângulo Isósceles." << endl;
        } else {
            cout << "Triângulo Escaleno." << endl;
        }
    } else {
        cout << "Os valores não podem formar um triângulo." << endl;
    }
}