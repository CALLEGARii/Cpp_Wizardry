#include "Dupla_encadeada.h"
#include <iostream>

using namespace std;

Dupla_encadeada::Dupla_encadeada(){

    inicio = NULL;
    aux = NULL;
    fim = NULL;

}

Dupla_encadeada::~Dupla_encadeada(){

}

void Dupla_encadeada::Menu(){

    int opc, chave=0;

    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - Inserir valor " << endl;
    cout << "[2] - Remover valor " << endl;
    cout << "[3] - Pesquisar valores " << endl;
    cout << "[4] - Imprimir Elementos " << endl;
    cout << "[0] - Sair" << endl;
    cout << "============================" << endl;
    cout << "Opcao: ";
    cin >> opc;


     switch(opc){
        case 1:
        this-> inserir();
        this->Menu();
        break;

        case 2:
            cout<<"Digite o valor remover... " << endl;
            cin>>chave;
            this->remover(chave);
            this->Menu();     
            break;

        case 3:
            this->imprimir();
            this->Menu();
            break;

        case 0:
            cout << "\nSaindo." << endl;
            break;

        default:
            cout << "\nOpcao Invalida. Tente novamente: " << endl;
            this->Menu();
    }

}

void Dupla_encadeada::inserir(){

    cout<<"Digite um elemento para ser inserido... " << endl;
    aux = (struct no*) malloc (sizeof(aux));
    cin>> aux ->valor;

    aux ->proximo = NULL;
    aux -> ant = NULL;

    if(inicio == NULL){
        inicio = aux;
        
    }else{
        fim -> proximo = aux;
        aux ->ant = fim; 
    }
    fim = aux;

}

no* Dupla_encadeada::pesquisar(int chave){
    
    for(aux = inicio; aux != NULL; aux = aux->proximo){

    if(aux ->valor == chave){
        return aux;
    }
  }
  return NULL;
}

void Dupla_encadeada::remover(int chave){

    no* Novoaux = new no;
    Novoaux = this->pesquisar(chave);

   if(aux == inicio){
    inicio = inicio ->proximo;
    inicio ->ant = NULL;

   }else if(aux == fim){
        fim = fim->ant;
        fim->proximo = NULL;

   }
    aux->ant->proximo = aux ->proximo;
    aux-> proximo ->ant = aux ->ant;
    cout<<"ELemento removido " << chave << endl;
    delete aux;
  
}

void Dupla_encadeada::imprimir(){

    aux = inicio;

   cout<< "Duplamente Encadeada [";
   while (aux != NULL){
        cout<< aux -> valor << " ";
        aux = aux->proximo;        
   }
   cout<< "]\n";  
}