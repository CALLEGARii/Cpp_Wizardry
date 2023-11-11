#include "Fibonacci.h"
#include <iostream>

using namespace std;

Fibonacci::Fibonacci() {
}

Fibonacci::Fibonacci(const Fibonacci& orig) {
}

Fibonacci::~Fibonacci() {
      for (int i = 0; i < 20; i++) {
        termos[i] = 0; // Inicialize todos os termos com 0
    }

    termos[0] = 1; // O primeiro termo
    termos[1] = 1; // O segundo termo
}


void Fibonacci::calcularSerie() {
 for (int i = 2; i < 20; i++) {
      termos[i] = termos[i - 1] + termos[i - 2]; // O próximo termo é a soma dos dois anteriores
    }
}

void Fibonacci::mostrarSerie() {
    cout << "Série de Fibonacci até o vigésimo termo:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << termos[i] << " ";
    }
    cout << endl;
}

