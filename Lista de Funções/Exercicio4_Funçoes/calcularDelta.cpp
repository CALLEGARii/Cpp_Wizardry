#include "calcularDelta.h"
#include <iostream>

using namespace std;

calcularDelta::calcularDelta() {
}

calcularDelta::calcularDelta(const calcularDelta& orig) {
}

calcularDelta::~calcularDelta() {
}

double calcularDelta(double a, double b, double c) {
    return (b * b) - (4 * a * c);
}


