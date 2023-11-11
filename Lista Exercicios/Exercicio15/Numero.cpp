#include "Numero.h"
#include <iostream>

using namespace std;

Numero::Numero() {
}

Numero::Numero(const Numero& orig) {
}

Numero::~Numero() {
}

void Numero::Ler_Dados(){
    
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "O número é par." << endl;
    } else {
        cout << "O número é ímpar." << endl;
    }
   
    if (numero > 0) {
        cout << "O número é positivo." << endl;
    } else if (numero < 0) {
        cout << "O número é negativo." << endl;
    } else {
        cout << "O número é zero." << endl;
    }
    
     
    
}