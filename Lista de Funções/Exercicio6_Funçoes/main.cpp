#include "Triangulo.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    double x, y, z;

    cout << "Digite os comprimentos dos lados do triângulo (separados por espaços): ";
    cin >> x >> y >> z;

    Triangulo::verificarTriangulo(x, y, z);

    return 0;
}

