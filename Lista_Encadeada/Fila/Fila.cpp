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
    cout << "[4] - Verificar Elemento na Fila " << endl;
    cout << "[5] - Mostrar Meio da Fila " << endl;
    cout << "[6] - Mostrar Endereco de Memoria " << endl;
    cout << "[7] - Mostrar Valores da Fila " << endl;
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
            this ->verificarFila();
            this ->Menu();
            break;
        case 5:
            this->MostrarMeio();
            this->Menu();
            break;
            
        case 6:
            cout << this->mostrarEndereco(meio)->proximo;
            this->Menu();
            break;

        case 7:
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

   if (recebido == NULL)
        return true;
    else
        return false;   

}

void Fila::inserir(){

    cout << "\nDigite o Elemento para ser inserido: ";
    aux = (struct no*) malloc(sizeof (aux));
    cin >> aux ->valor;
    
    if(primeiro == NULL){
        primeiro = aux;
    }else{
        ultimo -> proximo = aux;
    }
    ultimo = aux;
    ultimo ->proximo = NULL;

}

void Fila::remover(){
   
   if (!estavazio(primeiro)) {
        aux = primeiro;
        primeiro = primeiro->proximo;
        cout << "Removido com Sucesso.\n";
        delete aux;
        
    }
}

bool Fila::verificarFila(){

    int chave;
    
    cout<<"Digite o Elemento que deseja verificar se esta na Fila... " << endl;
    cin >> chave;

        aux = primeiro;

        while (aux != NULL){
            if(chave == aux ->valor){
                cout<<"Elemento encontrado na Fila " << endl;
                return true;
            }
            aux = aux ->proximo;         
        }
        cout<<"Numero nao esta na fila... " << endl;
        return false;
}

void Fila::MostrarMeio(){

    int contador = 1;
    int meio = 0;

    aux = primeiro;

        while(aux != NULL){
           aux = aux ->proximo;
           contador++;
        }
        meio = contador/2;
        
        cout<<"\nMeio da Fila " << meio << endl;
}

struct no* Fila::mostrarEndereco(int meio){
   
    int contador = 1;
    meio =2;

        aux = primeiro;

        while (aux != NULL){
            if(contador == meio){
                return aux;
            }
            aux = aux ->proximo;
            contador++;
        }

}

bool Fila::pesquisar(){

    int Pesq;
    aux = primeiro;

    cout<<"\nDigite o valor para pesquisar o Elemento... " << endl;
    cin>> Pesq;

    while(aux != NULL){
    if(Pesq == aux -> valor){
        cout<<"Elemento encontrado ... " << " [" << Pesq << "] " << endl;
        return true;
      }
      aux = aux -> proximo;

   }
    cout<<"\nElemento nao encontrado  " << " [" << Pesq << "] " << endl; 
    return false;

}

void Fila::imprimir(){

     aux = primeiro;

    cout<<"Fila: [ ";

    while (aux != NULL){
          cout<< aux -> valor << " ";
          aux = aux ->proximo; 
    }

    cout<< "]\n";
}
    
