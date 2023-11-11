#include "sAluno.h"
#include <string>
#include <iostream>
#include <cctype> 
using namespace std;


sAluno::sAluno(){
}

sAluno::sAluno(const sAluno& orig) {
}

sAluno::~sAluno() {
}

void sAluno::lerDados(){
    const int MAX_ALUNOS = 3;
    char opcao;
    int contador =0;       
    
    AlunoData vetAlunos[MAX_ALUNOS];
    
    do{ 
        cout<<"Digite o nome do Aluno: " << endl;
        cin >> vetAlunos[contador].nome;
        cout<<"Digite a matricula do Aluno: " << endl;
        cin >> vetAlunos[contador].matricula;
        cout <<"Digite a primeira nota: " << endl;
        cin >> vetAlunos[contador].n1;
        cout <<"Digite a segunda nota: " << endl;
        cin >> vetAlunos[contador].n2;
        contador++;
        
        cout <<"Deseja continuar cadastrando? S para continuar: " << endl;
        cin >> opcao;
        opcao = tolower(opcao);
        
    }while ((opcao == 's') && (contador < MAX_ALUNOS));
}
    
    void sAluno::mostrarDados(){ 
        const int MAX_ALUNOS = 3;
        AlunoData vetAlunos[MAX_ALUNOS];
        int contador;

        for(int i = 0; i<contador; i++){
            
         cout<<"\nOs Dados do aluno: " << i + 1 << " sao esses:\n";
         cout<<"Nome: " << vetAlunos[i].nome << endl;
         cout<<"Matricula: " << vetAlunos[i].matricula << endl;
         cout<< "Nota 1: " << vetAlunos[i].n1 << endl;
         cout<< "Nota 2: " << vetAlunos[i].n2 << endl;
         
         float media =(vetAlunos[i].n1 + vetAlunos[i].n2 /2);
         cout<< "A media é: " << media << endl;
         
           
        }
        
                
    }
     
