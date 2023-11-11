#include <iostream>
#include "primo.h"
using namespace std;

int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    if (primo(numero)) {
        cout << numero << " é um número primo." << endl;
    } else {
        cout << numero << " não é um número primo." << endl;
    }

    return 0;
}

