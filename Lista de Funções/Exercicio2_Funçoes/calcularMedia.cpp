#include "calcularMedia.h"
#include <iostream>

using namespace std;

calcularMedia::calcularMedia() {
}

calcularMedia::calcularMedia(const calcularMedia& orig) {
}

calcularMedia::~calcularMedia() {
}

double calcularMedia(double nota1, double nota2, double nota3, char tipo) {
    double media = 0.0;

    if (tipo == 'A' || tipo == 'a') {
        media = (nota1 + nota2 + nota3) / 3.0;
    } else if (tipo == 'P' || tipo == 'p') {
        media = (nota1 * 5.0 + nota2 * 3.0 + nota3 * 2.0) / 10.0;
    } else {
        // Se a letra não for 'A' nem 'P', retornamos -1 para indicar um erro.
        media = -1.0;
    }

    return media;
}
