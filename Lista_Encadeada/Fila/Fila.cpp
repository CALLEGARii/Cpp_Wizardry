#include "Fila.h"
#include <iostream>

using namespace std;

Fila::Fila(){

    primeiro = NULL;
    ultimo = NULL;
    aux = NULL;
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
            cout << this->mostrarElementomeio();
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

bool Fila::estavazio(struct no *recebido){

    if(recebido == NULL)
        return true;
    else
        return false;
}

void Fila::inserir(){

    cout<<"Digite o Elemento que deseja inserir " << endl;
    aux = (struct no*) malloc (sizeof(aux));
    cin >> aux -> valor;

   if(primeiro == NULL){
      primeiro = aux;

   }else{
        ultimo ->proximo = aux;
   }
   ultimo = aux;
   ultimo ->proximo = NULL;

}

void Fila::remover(){

    if(!estavazio(primeiro)){
        aux = primeiro;
        primeiro = primeiro ->proximo;
        cout<<"Removido com sucesso o Elemento " << aux ->valor << endl;
        delete aux;
    }
}

bool Fila::pesquisar(){

    int pesq;
    aux = primeiro;

    cout<<"\nDigite o Elemento para pesquisar " << endl;
    cin >> pesq;

    while (aux != NULL){

        if(pesq == aux ->valor){
            cout<<"\nValor encontrado! " << " ["  << pesq <<  "] " << endl;
            return true;
        }
        aux = aux ->proximo;      
    }
       cout<<"\nValor nao encontrado! " << " ["  << pesq <<  "] " << endl;
       return false;
  
}

int Fila::MostrarMeio(){ // serve apenas contar a quantidade de elementos e retornar o meio//

    int contador = 1;
    int meio =0;
    aux = primeiro;

    while (aux != NULL){
        aux = aux ->proximo;
        contador++;     
    }
    meio = contador/2;
   
    return meio;

}

struct no* Fila::mostrarEndereco(){ // serve para percorrer os elementos e retornar o aux do meio//
   
    int contador = 1;
    int meio = this->MostrarMeio();
    aux = primeiro;

    while(aux != NULL){
       if(meio == contador){
        return aux;
       }
       aux = aux ->proximo;
       contador++;
    }
    
}

int Fila::mostrarElementomeio(){
   
    int contador = 1;
    int meio = this->MostrarMeio();
    aux = primeiro;

    while(aux != NULL){
       if(meio == contador){
        return aux->valor;
       }
       aux = aux ->proximo;
       contador++;
    }   
}

void Fila::imprimir(){

    aux = primeiro;

    cout<<"Fila: [ ";

    while (aux != NULL){
         cout<< aux -> valor << " ";
         aux = aux ->proximo;
    }
    cout<<"]\n";
    
}