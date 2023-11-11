#include "cVoto.h"
#include <string>
#include <iostream>

using namespace std;

cVoto::cVoto() {
}

cVoto::cVoto(const cVoto& orig) {
}

cVoto::~cVoto() {
}

void cVoto::Menu(){
    int voto;
   
    cout<<"Aqui estao os candidatos: " << endl;
    cout<<"\nAdemilson: " << "Digite 1 " << endl;
    cout<<"\nBruno: " << " Digite 2 " << endl;
    cout<<"\nJose: " << " Digite 3 " << endl;
    cout<<"\nPedro: " << " Digite 4 " << endl;
    cout<<"\nVoto Nulo: " << " Digite 5 " << endl;
    cout<<"\nVoto em Branco: " << "Digite 6 " << endl;
    

    while(true){
        cout<<"\nDigite o codigo que deseja votar ou 0 para sair: " << endl;
        cin>> voto;
        
        if(voto == 0){
            cout<<"\nSaindo do Sistema! ";
            break;
        }
        
     this->Mostrar_Dados(voto);
     
    }
   
}


void cVoto::Mostrar_Dados(int voto){
    string nome_candidato;
    
    switch(voto){
    case 1:
        nome_candidato = "Candidato "  " Ademilson ";
        break;
        
    case 2:
        nome_candidato = "Candidato "  "Bruno ";
        break;
    
    case 3:
        nome_candidato = "Candidato "  "Jose ";
        break;
    
    case 4:
        nome_candidato = "Candidato "  "Pedro ";
        break;
        
    case 5:  
        nome_candidato = "Voto Nulo! ";
        break;
        
    case 6:
        nome_candidato = "Voto em Branco: ";
        break;
        
        default:
           cout<<"Candidato nao encontrado! ";
           return;
    }
    
  
    cout<<"\nO Voto Digitado Foi: " << nome_candidato << endl;
    return; 
}



        
        
        
        
   