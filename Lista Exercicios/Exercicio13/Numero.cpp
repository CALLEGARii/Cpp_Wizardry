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
    
     int num1, num2, num3;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "Digite o terceiro número: ";
    cin >> num3;

    int maior = num1;

    if (num2 > maior) {
        maior = num2;
    }

    if (num3 > maior) {
        maior = num3;
    }

    cout << "O maior número é: " << maior << endl;
    
    
    
    
}