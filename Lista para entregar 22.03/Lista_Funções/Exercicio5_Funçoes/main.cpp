#include "cCalculo.h"
#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    double raio;

    cout << "Digite o raio da esfera: ";
    cin >> raio;

    double volume = cCalculo::calcularVolumeEsfera(raio);

    cout << "O volume da esfera é: " << volume << endl;

    return 0;
}
    
