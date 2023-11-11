 #include "cProduto.h"
#include <string>
#include <iostream>

using namespace std;

cProduto::cProduto() {
}

cProduto::cProduto(const cProduto& orig) {
}

cProduto::~cProduto() {
}

void cProduto::menu(){
    int produto;
    int qtde;
    cout<<"Esses Sao os Produtos: " << endl;
    cout<<"\nCodigo 100: " << " Cachorro Quente " << " R$1,70 " << endl; 
    cout<<"Codigo 101: " << " Bauru Simples " << " R$2,30 " << endl;
    cout<<"Codigo 102: " << " Bauru com Ovo " << " R$2,60 " << endl;
    cout<<"Codigo 103: " << " Hamburguer " << " R$2,40 " << endl;
    cout<<"Codigo 104: " << " Cheeseburguer " << " R$2,50 " << endl;
    cout<<"Codigo 105: " << " Refrigerante " << " R$1,00 " << endl;
    
    cout<<"Digite qual produto deseja comprar: " << endl;
    cin>> produto;
   
    cout<<"\nDigite a quantidade que deseja: " << endl;
    cin>> qtde;
    
    this->Ler_Dados(produto,qtde);
}


void cProduto:: Ler_Dados(int produto, int qtde){
     float valor_total=0.00;
     string nome_produto;
 
    switch(produto){
      
        case 100:
            nome_produto = "Cachorro Quente: ";
            valor_total = 1.70 * qtde;
            break;
            
        case 101:
            nome_produto = "Bauru Simples: ";
            valor_total = 2.30 * qtde;
            break;
        
        case 102:
            nome_produto = "Bauru com Ovo: ";
            valor_total = 2.60 * qtde;
            break;
            
        case 103:
            nome_produto = "Hamburguer: ";
            valor_total = 2.40 * qtde;
            break;
            
        case 104:
            nome_produto = "Cheeseburguer: ";
            valor_total = 2.50 * qtde;
            break;
            
        case 105:
            nome_produto = "Refrigerante: ";
            valor_total = 1.00 * qtde;
            break;
      
          default:
          cout<<"Produto nao encontrado! " << endl;
          return;   
    }
    
    cout<<"\nVoce escolheu o produto: " << nome_produto << endl;
    cout<<"\nValor total a se pagar: " << " = " << " R$ " <<  valor_total << " Reais " <<  endl; 
  
}