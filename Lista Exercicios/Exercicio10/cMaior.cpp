#include "cMaior.h"
#include <iostream>

using namespace std;

cMaior::cMaior() {
}

cMaior::cMaior(const cMaior& orig) {
}

cMaior::~cMaior() {
}

void cMaior::Ler_Calculo(){
    double a, b, c;

    // Solicita ao usuário que insira os valores a, b e c
    cout << "Digite o valor de a: ";
    cin >> a;

    cout << "\nDigite o valor de b: ";
    cin >> b;

    cout << "\nDigite o valor de c: ";
    cin >> c;

    double maior = a;

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }
  
    double resultado = (a + b + abs(a - b)) / maior;

    cout << "\nValores lidos: a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "\nO maior dos três valores é: " << maior << " (É o maior)" << endl;
    cout << "\nResultado da expressão: " << resultado << endl;
    
    
    
    
    
}