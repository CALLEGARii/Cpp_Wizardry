#include "Banco.h"
#include <iostream>

using namespace std;

Banco::Banco() {
}

Banco::Banco(const Banco& orig) {
}

Banco::~Banco() {
}

void Banco::Ler_Dados(){
    
     double saldo_medio, valor_credito;

    cout << "Digite o saldo médio do cliente: R$";
    cin >> saldo_medio;

    switch (static_cast<int>(saldo_medio)) {
        case 0 ... 200:
            valor_credito = 0;
            break;
        case 201 ... 400:
            valor_credito = saldo_medio * 0.2;
            break;
        case 401 ... 600:
            valor_credito = saldo_medio * 0.3;
            break;
        default:
            valor_credito = saldo_medio * 0.4;
            break;
    }

    cout << "\nSaldo médio do cliente: R$" << saldo_medio << endl;
    cout << "\nValor do crédito: R$" << valor_credito << endl;

}
