#include "Pilha.h"
#include <iostream>

using namespace std;

Pilha::Pilha(){

    aux = NULL;
    topo = NULL;
}

Pilha::~Pilha(){

}

void Pilha::menu(){

    int opc;
    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - Inserir " << endl;
    cout << "[2] - Remover " << endl;
    cout << "[3] - Pesquisar valor na pilha " << endl;
    cout << "[4] - Mostrar Meio " << endl;
    cout << "[5] - Mostrar endereco " << endl;
    cout << "[6] - Mostrar valores da pilha " << endl;
    cout << "[0] - Sair" << endl;
    cout << "============================" << endl;
    cout << "Opcao: ";
    cin >> opc;

        switch (opc) {
        case 1:
            this->inserir();
            this->menu();
            break;

        case 2:
            this->remover();
            this->menu();
            break;
            
        case 3:
            this->pesquisar();
            this->menu();
            break;

        case 4:
            cout << this->mostrarMeio();
            this->menu();
            break;

        case 5:
            cout << this->mostrarEndereco();
            this->menu();
            break;

        case 6:
            this->imprimir();
            this->menu();
            break;    

        case 0:
        cout << "Saindo." << endl;
        break;

        default:
        cout << "Opcao Invalida. Insira novamente" << endl;
        this->menu();
    }
}

void Pilha::inserir(){

    cout<<"Digite o elemento para inserir na Pilha... " << endl;
    aux = (struct no*) malloc (sizeof(aux));
    cin >> aux->valor;

    aux ->ant = topo;
    topo = aux;
}

bool Pilha::estavazio(struct no* recebido){

    if(recebido == NULL){
        return true;
    }
    return false;
}

void Pilha::remover(){

     if(!estavazio(topo)){
        aux = topo;
        topo = topo ->ant;
        cout<<"Elemento Removido com Sucesso! " << "[" << aux ->valor << "]" << endl;
        delete aux;
     }
}

bool Pilha::pesquisar(){

    int pesquisa =0;

    cout<<"Digite o elemento para ser pesquisado... " << endl;
    cin >> pesquisa;

    for(aux = topo; aux != NULL; aux = aux->ant){
        if(pesquisa == aux->valor){
            cout<<"Elemento Encontrado! " << aux ->valor << endl;
            return true;
        }
    }
    cout<<"Elemento nao encontrado! " << aux ->valor << endl;
    return false;
}

int Pilha::repartirMeio(){

    int contador = 1;
    int meio = 0;

    for(aux = topo; aux != NULL; aux = aux ->ant){
        contador++;
    }
    meio = contador/2;
    return meio;
}

int Pilha::mostrarMeio(){

    int contador = 1;
    int meio = this->repartirMeio();

    for(aux = topo; aux != NULL; aux = aux ->ant){
        if(contador == meio){
            return aux ->valor;
        }
        contador++;
    }
}

struct no* Pilha::mostrarEndereco(){

    int contador = 1;
    int meio = this->repartirMeio();

    for(aux = topo; aux != NULL; aux = aux ->ant){
        if(contador == meio){
            return aux;
        }
        contador++;
    }
}

void Pilha::imprimir(){
    
    aux = topo;
    cout<< endl;
    while(aux != NULL){
        cout<< aux ->valor << endl;
        aux = aux ->ant;
    }

}