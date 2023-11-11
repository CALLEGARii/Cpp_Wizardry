#include "cAluno.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

cAluno::cAluno() {
}

cAluno::cAluno(const cAluno& orig) {
}

cAluno::~cAluno() {
}

void cAluno::Ler_Dados(){
     
     int qtde = 0;
     int smatricula = 0;
    cout<<"Digite a quantidade de alunos que deseja calcular a media " <<endl;
    cin >> qtde;
    
    sAluno vetAluno[qtde];
    
    for (int i=0; i<qtde; i++){
        
        cout<<"Nome: " << endl;
        cin>> vetAluno[i].nome;
        cout<<"Matricula " << endl;
        cin>> vetAluno[i].matricula;
        cout<<"Nota 1 " << endl;
        cin>> vetAluno[i].n1;
        cout<<"Nota 2 " << endl;
        cin>> vetAluno[i].n2;
        cout<<"Nota 3 " << endl;
        cin>> vetAluno[i].n3;
              
        
    }
    
     this->Mostrar_Dados(vetAluno,qtde,smatricula);
    
}



void cAluno::Mostrar_Dados(sAluno* vetAluno,int qtde, int smatricula){
    
    vetAluno[qtde];
    
    for (int i=0; i<qtde; i++){
        
        cout<<"\nAluno " << i + 1 << endl;
        cout<<"Nome " << vetAluno[i].nome << endl;
        cout<<"Matricula " << vetAluno[i].matricula << endl;
        cout<<"Nota 1: " << vetAluno[i].n1 << endl;
        cout<<"Nota 2: " << vetAluno[i].n2 << endl;
        cout<<"Nota 3: " << vetAluno[i].n3 << endl;
    }
    
    
    cout <<"Digite a Matricula do Aluno que deseja Fazer a média " << endl;
    cin>> smatricula;
    
    this->Calcular_Media(vetAluno,qtde,smatricula);
   
    
}




float cAluno::Calcular_Media(sAluno* vetAluno, int qtde, int smatricula){
    int media;
    
    for(int i=0; i<qtde; i++){
        
        if(smatricula == vetAluno[i].matricula){
            cout<<"\nNome " << vetAluno[i].nome << endl;
            cout<<"Nota 1 " << vetAluno[i].n1 << endl;
            cout<<"Nota 2 " << vetAluno[i].n2 << endl;
            cout<<"Nota 3 " << vetAluno[i].n3 << endl;
        
            media = (2.3*vetAluno[i].n1 + 5*vetAluno[i].n2 + vetAluno[i].n3)/10;
            
            cout<<"\nMedia Ponderada do Aluno " << vetAluno[i].nome << " = " << media << endl; 
            return media;
        }
        
    }
    
    cout<<"\nAluno nao encontrado " << endl;
    return -1;
    
    
}