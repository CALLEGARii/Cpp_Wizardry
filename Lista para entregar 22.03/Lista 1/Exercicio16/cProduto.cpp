#include "cProduto.h"
#include <iostream>

using namespace std;

cProduto::cProduto() {
}

cProduto::cProduto(const cProduto& orig) {
}

cProduto::~cProduto() {
}

void cProduto:: Ler_Dados(){
    
    int codigo_item;
    int quantidade;
    float preco;

    // Solicita ao usuário que insira o código do item e a quantidade desejada
    cout << "Digite o código do item (100 a 105): ";
    cin >> codigo_item;

    cout << "Digite a quantidade desejada: ";
    cin >> quantidade;

    cout<< this->Calculo(codigo_item,preco,quantidade);
    
} 


float cProduto::Calculo(int codigo_item, int preco, int quantidade){
    
    float valor_total=0;
    
    switch (codigo_item) {
        case 100:
            preco = 1.20;
            break;
        case 101:
            preco = 1.30;
            break;
        case 102:
            preco = 1.50;
            break;
        case 103:
            preco = 1.20;
            break;
        case 104:
            preco = 1.30;
            break;
        case 105:
            preco = 1.00;
            break;
        default:
            cout << "Código de item inválido." << endl;
            return 1;
               
    }
    
    valor_total= (quantidade * preco);

    cout << "Valor a ser pago: R$" << valor_total << endl;
    
 
    
}