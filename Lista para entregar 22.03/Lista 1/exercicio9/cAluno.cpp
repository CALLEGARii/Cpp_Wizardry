#include "cAluno.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

cAluno::cAluno() {
}

cAluno::cAluno(const cAluno& orig) {
}

cAluno::~cAluno() {
}


void cAluno::Ler_Dados(){
    
    int qtde=0;
    int sMatricula=0;
    
    cout<<"Digite a quantidade de Alunos que deseja Cadastrar " << endl;
    cin >> qtde;
    
    sAluno vetAlunos[qtde];
    
    for (int i=0; i<qtde; i++){
        
        cout<<"Nome: " << endl;
        cin>> vetAlunos[i].nome;
        cout<<"Matricula: " << endl;
        cin>> vetAlunos[i].matricula;
        cout<<"Nota 1: " << endl;
        cin>> vetAlunos[i].n1;
        cout<<"Nota 2: " << endl;
        cin>> vetAlunos[i].n2;
        cout<<"Nota 3: " << endl;
        cin>> vetAlunos[i].n3;
        
        
    }
     cout<<"\nOs Alunos Cadastrados sao " << endl;   
    
     this-> Mostrar_Dados(vetAlunos, sMatricula,qtde);

}



void cAluno::Mostrar_Dados(sAluno* vetAlunos, int sMatricula, int qtde){
    
    vetAlunos[qtde];
    
    for (int i=0; i<qtde; i++){
        
        cout<< "\nAluno " << i + 1 << " -------- "<< endl;
        cout<<"\nNome " << vetAlunos[i].nome << endl;
        cout<<"Matricula " << vetAlunos[i].matricula << endl;
        cout<<"Nota 1: " << vetAlunos[i].n1 << endl;
        cout<<"Nota 2: " << vetAlunos[i].n2 << endl;
        cout<<"Nota 3: " << vetAlunos[i].n3 << endl;
       
        
    }
        
    cout<<"\nDigite a matricula do aluno para fazer a Media " << endl;
    cin>> sMatricula;
 
    cout<< this->Calcular_Media(vetAlunos, sMatricula, qtde);
}



float cAluno::Calcular_Media(sAluno* vetAlunos, int sMatricula, int qtde){
    
    int media;
 
    for(int i=0; i<qtde; i++){
        if(sMatricula == vetAlunos[i].matricula){
            
          cout<<"\nDados do Aluno " << " ------- " << endl;
          cout<<"Nome: " << vetAlunos[i].nome << endl;
          cout<<"Nota 1: " << vetAlunos[i].n1 << endl;
          cout<<"Nota 2: " << vetAlunos[i].n2 << endl;
          cout<<"Nota 3: " << vetAlunos[i].n3 << endl;
          
          media = (vetAlunos[i].n1 + vetAlunos[i].n2 + vetAlunos[i].n3)/3;
          
          cout<<" \nMedia desse Aluno " << " = " << media << endl;
          
          if(media >=6){
             cout<<"\nAprovado " << endl;   
          }
          if(media <6){
             cout<<"\nReprovado " << endl;
         }
          
          return media;
                
     }
        
           
  }
    
    cout<<"\nAluno nao encontrado " << endl;
    return -1;

 }
    
