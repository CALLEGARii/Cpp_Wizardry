#include "cMultiplos.h"
#include <iostream>
#include <string>

using namespace std;

cMultiplos::cMultiplos() {
}

cMultiplos::cMultiplos(const cMultiplos& orig) {
}

cMultiplos::~cMultiplos() {
}

void cMultiplos::Ler_Dados(){
   
    int a, b;

    cout << "Digite o valor de a: ";
    cin >> a;

    cout << "\nDigite o valor de b: ";
    cin >> b;

    if (a % b == 0 || b % a == 0) {
        cout << "\nSão múltiplos" << endl;
    } 
    else {
        cout << "\nNão são múltiplos" << endl;  
   }
    
    
}