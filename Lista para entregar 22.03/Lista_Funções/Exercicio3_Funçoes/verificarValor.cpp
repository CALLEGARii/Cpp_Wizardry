#include "verificarValor.h"
#include <iostream>

using namespace std;

verificarValor::verificarValor() {
}

verificarValor::verificarValor(const verificarValor& orig) {
}

verificarValor::~verificarValor() {
}

int verificarValor(int valor) {
    if (valor > 0) {
        return 1; // Valor positivo
    } else if (valor < 0) {
        return -1; // Valor negativo
    } else {
        return 0; // Valor igual a zero
    }
}
