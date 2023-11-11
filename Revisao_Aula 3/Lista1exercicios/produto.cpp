
#include "produto.h"
#include <cmath>
#include <iostream>

using namespace std;

produto::produto() {
  
}

produto produto(const produto& orig){
  
}

produto::~produto() {
}

void produto::menu(){
    
   cout<< "Código do Produto - Preço" <<endl;
   cout<< "100 - 5,32" <<endl;
   cout<< "132 - 6,45" <<endl;
   cout<< "654 - 2,37" <<endl;
   cout<< "198 - 5,32" <<endl;
   cout<< "762 - 6,45" <<endl;
}    

   void produto::lerpedido(){
       float vendaTotal= 0.0;
       char opcao= 'c';
       int codigo=0, qtde=0;
       
       
       while(opcao == 'c'){
           this->menu();
           cin>> codigo;
           cout<<"Digite a quantidade"<<endl;
           cin>>qtde;
           vendaTotal+=this-> vendaTotal(codigo, qtde);
           cout<<"Valor atualizado: "<<vendaTotal;
           
           cout<<"Deseja continuar? Digite c ou t para terminar"<<endl;
           cin>>opcao;
           
           
       }
  
   }   
  
   float produto::vendaTotal(int codigo, int qtde){
       float venda=0.0;
       
       switch(codigo){
          case 100: venda= 5.32 * qtde;
           break;
          case 132: venda= 6.45 * qtde;
           break;
          case 654: venda= 2.37 * qtde;
           break;
          case 198: venda= 5.32 * qtde;
           break;
          case 762: venda= 6.45 * qtde;
           default: 
             cout<<"Código invalido:";
       }
       return venda;
       
   }