#include <cstdlib>
#include "verificarValor.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int valor;

    cout << "Digite um valor inteiro: ";
    cin >> valor;

    int resultado = verificarValor(valor);

    if (resultado == 1) {
        cout << "O valor é positivo." << endl;
    } else if (resultado == -1) {
        cout << "O valor é negativo." << endl;
    } else {
        cout << "O valor é zero." << endl;
    }

    return 0;
}

