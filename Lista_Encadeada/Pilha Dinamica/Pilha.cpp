#include <iostream>
#include "pilha.h"
using namespace std;

Pilha::Pilha() {
    aux = NULL;
    topo = NULL;
}

Pilha::~Pilha() {
}

void Pilha::Menu() {

    int opc;
    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - inserir " << endl;
    cout << "[2] - Remover" << endl;
    cout << "[3] - Mostrar valores da pilha " << endl;
    cout << "[4] - Pesquisar valor na pilha " << endl;
    cout << "[5] - Mostrar Meio da Pilha " << endl;
    cout << "[6] - Mostrar Endereco " << endl;
    cout << "[0] - Sair" << endl;
    cout << "============================" << endl;
    cout << "Opcao: ";
    cin >> opc;

    switch (opc) {
        case 1:
            this->inserir();
            this->Menu();
            break;

        case 2:
            this->remover();
            this->Menu();
            break;

        case 3:
            this->imprimir();
            this->Menu();
            break;

        case 4:
            this->pesquisar();
            this->Menu();
            break;

        case 5:
            this->mostrarMeio();
            this-> Menu();
            break; 
        
        case 6:
            cout << this->mostrarEndereco(meio)->valor;
            this->Menu();
            break;

        case 0:
            cout << "Saindo." << endl;
            break;

        default:
            cout << "Opcao Invalida. Insira novamente" << endl;
            this->Menu();
    }

}

void Pilha::inserir() {

    cout << "Digite o valor para empilhar: ";
    aux = (struct no*) malloc(sizeof (aux));
    cin >> aux ->valor;

    aux->ant = topo;
    topo = aux; 

}

bool Pilha::estavazio(struct no *recebido) {

    if (recebido == NULL)
        return true;
    else
        return false;
}

void Pilha::remover() {

    if (!estavazio(topo)) {
        aux = topo;
        topo = topo->ant;
        cout << "\nO elemento removido  foi: " << aux->valor << endl;
        delete aux;
    }
}

void Pilha::imprimir() {

    aux = topo;
    while (!estavazio(aux->ant)) {
        cout << aux -> valor << endl;
        aux = aux->ant;
    }

    cout << aux->valor << endl;
}

void Pilha::mostrarMeio(){

    int cont =1;
    meio = 0;
    aux = topo;

    while (aux != NULL){
        aux = aux ->ant;   
        cont++;
    }  
    meio = cont/2;
    
    cout<<"O meio da Pilha " << meio << endl;   
}

struct no* Pilha::mostrarEndereco(int meio){
    
    int cont =1;
    aux = topo;

    while(aux != NULL){
        
        if(cont == meio){
            return aux;

          }
           aux = aux ->ant;
           cont++;
         
        } 
    } 

void Pilha::pesquisar() {

    int chave;
    cout << "Digite um valor para verificar se esta empilhado: ";
    cin >> chave;
      
       aux = topo;
       while(aux != NULL){
        if (chave == aux->valor) {
            cout << "Valor esta empilhado." << endl;
            return;
        }
        aux = aux ->ant;       
    }     
    
   cout << "Valor nao esta empilhado. " << endl;
}