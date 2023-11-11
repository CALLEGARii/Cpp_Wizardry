#include "Pilha.h"
#include <iostream>
#include <new>
#include <cstddef>

using namespace std;

Pilha::Pilha(){

    topo = NULL;
}


Pilha::~Pilha(){

    no* temp;
    
    while (topo != NULL){

        temp = topo;
        topo = topo -> proximo;
        delete temp;
    }
}


bool Pilha::estaVazio(){

    return (topo == NULL);
}


bool Pilha::estaCheio(){

    no* noNovo;

    try{  
        noNovo = new no;
        delete noNovo;
        return false;

    }catch(bad_alloc exception){

        return true;
    }
}


void Pilha::inserir(TipoItem item){


    if(estaCheio()){

        cout<<"\nA Fila está cheia.... " << endl;
        cout<<"Nao foi possivel adicionar o elemento! " << endl;

    }else{
        
        no* noNovo = new no;
        noNovo -> valor = item;
        noNovo -> proximo = topo;
        topo = noNovo;
    }

}


TipoItem Pilha::remover(){

     if(estaVazio()){

        cout<<"\nA Fila esta vazia.... " << endl;
        cout<<"Nao foi possivel remover o Elemento! " << endl;
        return 0;
        
     }else{

        no* temp;
        temp = topo;
        TipoItem item = topo -> valor;
        topo = topo -> proximo;
        delete temp;

        return item;
     }
}


bool Pilha::pesquisar(TipoItem item){

    no* temp = topo;

    while (temp != NULL){
        if(temp -> valor == item){

            cout<<"\nElemento encontrado: " << "[" << item << "]"<< endl;
            return true;
        }
        temp = temp -> proximo;      
    }
    return false;
}

void Pilha::imprimir(){

    no* temp = topo;

    cout<< "\nPilha: " << endl;

    while (temp != NULL){
        
        cout<< temp -> valor << " " << endl;
        temp = temp -> proximo;
        
    }

    cout<< endl;

}
