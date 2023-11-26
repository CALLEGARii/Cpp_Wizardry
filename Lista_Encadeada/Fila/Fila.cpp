#include "Fila.h"
#include <iostream>

using namespace std;

Fila::Fila(){

    inicio = NULL;
    aux = NULL;
    fim = NULL;

}

Fila::~Fila(){

}

void Fila::Menu(){

    int opc;

    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - Inserir valor à Fila " << endl;
    cout << "[2] - Remover valor da Fila " << endl;
    cout << "[3] - Pesquisar valores da Fila " << endl;
    cout << "[4] - Mostrar Meio da Fila " << endl;
    cout << "[5] - Mostrar Endereco de Memoria " << endl;
    cout << "[6] - Mostrar Valores da Fila " << endl;
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
            this->remover();
            this->Menu();     
            break;

        case 3:
            this->pesquisar();
            this->Menu();  
            break;

        case 4:
            cout << this->mostrarElementoMeio();
            this->Menu();
            break;        
            
        case 5:
            cout << this->mostrarEndereco();
            this->Menu();
            break;   

        case 6:
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

void Fila::inserir(){

    cout<<"Digite o Elemento para ser inserido... " << endl;
    aux = (struct no*) malloc (sizeof(aux));
    cin>> aux ->valor;

   if(inicio == NULL){
      inicio = aux;
   }else{
        fim ->proximo = aux;
   }
   fim = aux;
   fim ->proximo = NULL;
}

bool Fila::estavazio(struct no* recebido){

    if(recebido == NULL){
        return true;
    }
    return false;
}

void Fila::remover(){

    if(!estavazio(inicio)){
        aux = inicio;
        inicio = inicio ->proximo;
        cout<<"\nElemento removido com Sucesso! " << aux ->valor << endl;
        delete aux;
    }
}

bool Fila::pesquisar(){

    int pesq;

    cout<<"\nDigite o elemento para ser Pesquisado na Fila... " << endl;
    cin >> pesq;

    aux = inicio;

    while(aux != NULL){
        if(pesq == aux ->valor){
            cout<<"\nElemento encontrado! " << pesq << endl;
            return true;
        }
        aux = aux ->proximo;
    }
    cout<<"\nElemento nao encontrado! " << pesq << endl;
}

int Fila::repartirMeio(){

    int contador =1;
    int meio =0;
    aux = inicio;

    while(aux != NULL){
        aux = aux->proximo;
        contador++;
    }
    meio = contador/2;
    return meio;
}

struct no* Fila::mostrarEndereco(){

    int contador = 1;
    int meio = this->repartirMeio();
    aux = inicio;
    
    while(aux != NULL){
        if(meio == contador){
            return aux;
        }
        aux = aux ->proximo;
        contador++;
    }
}

int Fila::mostrarElementoMeio(){

    int contador = 1;
    int meio = this->repartirMeio();
    aux = inicio;

    while(aux != NULL){
        if(meio == contador){
            return aux ->valor;
        }
        aux = aux->proximo;
        contador++;
    }
}

void Fila::imprimir(){

    aux = inicio;

    cout<<"Fila: [";

    while(aux != NULL){
        cout<< aux -> valor << " ";
        aux = aux ->proximo;
    }
    cout<<"]\n";
}