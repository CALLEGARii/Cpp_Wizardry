#include "cCalculo.h"
#include <iostream>
#include <cmath>

using namespace std;

cCalculo::cCalculo() {
}

cCalculo::cCalculo(const cCalculo& orig) {
}

cCalculo::~cCalculo() {
}

 const double PI = 3.14;

double cCalculo::calcularVolumeEsfera(double raio) {
    return (4.0 / 3.0) * PI * pow(raio, 3);
}