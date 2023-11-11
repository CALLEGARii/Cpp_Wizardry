#include "FILA.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

FILA::FILA() {
    
    this->inicio=NULL;
    this->fim=NULL;
    this->aux=NULL;
}

FILA::FILA(const FILA& orig) {
}

FILA::~FILA() {
}


void FILA::Menu(){
    int opcao;
    
    cout<<"Selecione uma opção------- " << endl;
    cout<<"[1] Inserir valor: " << endl;
    cout<<"[2] Remover valor: " << endl;  
    cout<<"[3] Listar: " << endl;
    cout<<"[4] Pesquisar: " << endl;
    cin>> opcao;
    
    switch(opcao){
        
        case 1:
            this->inserir();
            break;
        case 2:
            this-> remover();
            break;
        case 3:
            this-> listar();
            break;
        case 4:
            this-> pesquisar();
            break;
        case 0:
            cout<<"Encerrado! " << endl;
            break;
        
    }
    
    
}

void FILA:: remover(){
    
    
}

//  opcional-----this->aux ->prox = NULL

void FILA::listar(){
    
    for(this->aux = this->inicio; this->aux->prox != NULL;  this->aux = this->aux->prox)
       
        cout<<this->aux->valor << endl;
  

}

void FILA::pesquisar(){
    
}

void FILA::inserir(){
    
    cout<< "Digite o valor ? " <<endl;
    
    this-> aux = (struct no*)malloc(sizeof(this->aux));
    cin>> this-> aux -> valor;
    this->aux->prox=NULL;
    
    if(this->inicio == NULL)        
        this->inicio = this->aux;
    else
        this->fim->prox = this->aux;
    this->fim = this->aux;
    
    cout<<"Elemento inserido";
    
    
}


