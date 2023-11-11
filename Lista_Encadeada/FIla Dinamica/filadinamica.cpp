#include "filadinamica.h"
#include <iostream>
#include <cstddef>
#include <new>

using namespace std;

filadinamica::filadinamica(){ 

    primeiro = NULL;
    ultimo = NULL;

}

   filadinamica::~filadinamica(){

    no* temp;

    while (primeiro != NULL){
        
        temp = primeiro;
        primeiro = primeiro -> proximo;
        delete temp;
    }
    ultimo = NULL;
    
   } 

    bool filadinamica::estavazio(){

    return (primeiro == NULL);

   }


    bool filadinamica::estacheio(){

     no* temp;
     
     try{
        temp = new no;
        delete temp;
        return false;

     }catch(bad_alloc Exception){

        return true;
     }

   }

   void filadinamica::inserir(TipoItem item){
       
       if(estacheio()){

         cout<<"A Fila esta cheia.... " << endl;
         cout<<"\nNao foi possivel inserir o elemento! " << endl;
         
       }else{
           
           no* noNovo = new no;
           noNovo -> valor = item;
           noNovo -> proximo = NULL;

           if(primeiro == NULL){
              
              primeiro = noNovo;

           }else{

              ultimo -> proximo = noNovo;

           }
           ultimo = noNovo;
       }
   }


   TipoItem filadinamica::remover(){

    if(estavazio()){
       cout<<"A Fila esta vazia.... \n" << endl;
       cout<<"Nao tem elemento para remover! \n" << endl;

     return 0;

    }else{
        no* temp = primeiro;
        TipoItem item = primeiro ->valor;
        primeiro = primeiro ->proximo;
        
        if(primeiro == NULL){
            ultimo = NULL;
        }
        delete temp;
        return item;
    }

 }


   void filadinamica::imprimir(){

    no* temp = primeiro;

    cout<<"Fila: [ ";

    while(temp != NULL){

        cout<< temp ->valor << " ";
        temp = temp ->proximo;

    }

    cout<< "]\n";

   } 