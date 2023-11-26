#include "Pilha.h"
#include <iostream>

using namespace std;

Pilha::Pilha(){

     aux = NULL;
     topo = NULL;
}

Pilha::~Pilha(){

}

void Pilha::menu() {

    int opc;
    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - Empilhar " << endl;
    cout << "[2] - Desempilhar" << endl;
    cout << "[3] - Mostrar valores da pilha " << endl;
    cout << "[4] - Pesquisar valor na pilha " << endl;
    cout << "[5] - Mostrar Meio " << endl;
    cout << "[6] - Mostrar endereco " << endl;
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
            this->mostrar();
            this->menu();
            break;
            
        case 4:
            this->pesquisar();
            this->menu();
            break;

        case 5:
        cout << this->mostrarValorMeio();
        this->menu();
        break;

        case 6:
        cout<<this->mostrarEndereco();
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

void Pilha::inserir() {

    cout << "Digite o valor para empilhar: ";
    aux = (struct no*) malloc(sizeof (aux));
    cin >> aux ->valor;

    this->aux->ant = this->topo;
    this->topo = this->aux;

}

bool Pilha::vazio(struct no *recebido) {

    if (recebido == NULL)
        return true;
    else
        return false;

}

void Pilha::remover() {

    if (!vazio(this->topo)) {
        this->aux = this->topo;
        this->topo = this->topo->ant;
        cout << "\nO elemento desempilhado foi: " << this->aux->valor << endl;
        free(this->aux);
    }
}

void Pilha::mostrar() {

    aux = topo;
    while (!vazio(aux->ant)) {
        cout << aux -> valor << endl;
        aux = aux->ant;
    }
    cout << aux->valor << endl;
}

int Pilha::repartirMeio(){
    int meio=0;
    int qtde =1;
    aux = topo;
    
    while(aux != NULL){
        aux = aux -> ant;
        qtde++;
    }
    meio = qtde/2;
    return meio;

}

struct no* Pilha::mostrarEndereco(){

    int meio= this->repartirMeio();
    int cont =1;
    aux = topo;

    while(aux != NULL){

        if(cont == meio){
           return aux;        
           //cout << aux << endl;
        }
        aux = aux ->ant;
        cont++;
       
    }
}

int Pilha::mostrarValorMeio(){

    int contador =1;
    int meio = this->repartirMeio();
    aux = topo;

    while(aux != NULL){
        if(meio == contador){
            return aux -> valor;
        }
        aux = aux ->ant;
        contador++;
    }

}

bool Pilha::pesquisar() {

    int chave;
    cout << "Digite um valor para verificar se esta empilhado: ";
    cin >> chave;

    for (aux = topo; aux != NULL; aux = aux->ant) {
        if (chave == this->aux->valor) {
            cout << "Valor esta empilhado... " << aux ->valor << endl;
            return true;
        }     
    }
    cout << "Valor nao esta empilhado... " << aux ->valor << endl;
    return false;
}
