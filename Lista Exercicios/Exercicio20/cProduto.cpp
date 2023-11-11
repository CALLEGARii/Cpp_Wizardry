#include "cProduto.h"
#include <iostream>

using namespace std;

cProduto::cProduto() {
}

cProduto::cProduto(const cProduto& orig) {
}

cProduto::~cProduto() {
}


void cProduto::Menu(){
    
    cout << "Tabela de Produtos:" << endl;
    cout << "1001 - Produto 1 (Preço unitário: R$5.32)" << endl;
    cout << "1324 - Produto 2 (Preço unitário: R$6.45)" << endl;
    cout << "6548 - Produto 3 (Preço unitário: R$2.37)" << endl;
    cout << "0987 - Produto 4 (Preço unitário: R$5.32)" << endl;
    cout << "7623 - Produto 5 (Preço unitário: R$6.45)" << endl;
    
    this->Ler_Dados();
    
}


void cProduto::Ler_Dados(){
    
    cout << "Digite o código do produto: ";
    cin >> codigo;

    cout << "Digite a quantidade comprada: ";
    cin >> quantidade;

   cout<< this->Calculo();
}



float cProduto::Calculo(){
    
   double preco_unitario;
   double preco_total;
   
   switch (codigo) {
        case 1001:
            preco_unitario = 5.32;
            break;
        case 1324:
            preco_unitario = 6.45;
            break;
        case 6548:
            preco_unitario = 2.37;
            break;
        case 987:
            preco_unitario = 5.32;
            break;
        case 7623:
            preco_unitario = 6.45;
            break;
        default:
            cout << "\nCódigo de produto inválido." << endl;
             
    }

    preco_total = preco_unitario * quantidade;

    
    cout << "\nPreço total devido: R$" << preco_total << endl;
   
    
    cout<<"\nSistema encerrado! " << endl;
    return 0;
}