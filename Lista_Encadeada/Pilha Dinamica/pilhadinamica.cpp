#include "pilhadinamica.h"
#include <iostream>
#include <cstddef> //NULL

using namespace std;

pilhadinamica::pilhadinamica(){ //construtor

      topo = NULL;
}

 pilhadinamica::~pilhadinamica(){ //destrutor

     no* temp;

     while(topo != NULL){

         temp = topo;
         topo = topo -> proximo;
         delete temp;
     }

 }


 bool pilhadinamica::estavazio(){
   
    return (topo == NULL);

 }

 bool pilhadinamica::estacheio(){ // tem memoria

    no* noNovo;

    try{ 
       noNovo = new no;
       delete noNovo;
       return false;

    }catch(bad_alloc Exeception){
        
        return true;

    }

 }

 void pilhadinamica::inserir(TipoItem item){

    if(estacheio()){

        cout<<"\nA pilha esta cheia: " << endl;
        cout<<"Nao foi possivel inserir este elemento: " << endl;

    }else{

        no* noNovo = new no;
        noNovo -> valor = item;
        noNovo -> proximo = topo;
        topo = noNovo;
    }

 }

 TipoItem pilhadinamica::remover(){

    if(estavazio()){

        cout<<"\nA pilha esta vazia: " << endl;
        cout<<"Nao foi possivel remover nenhum elemento: " << endl;

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


 void pilhadinamica::imprimir(){

    no* temp = topo;

    cout<<"\nPilha: " << endl;

    while(temp != NULL){
       
        cout<< temp -> valor << " " << endl;
        temp = temp ->proximo;

    }
    cout << endl;
    
 }
