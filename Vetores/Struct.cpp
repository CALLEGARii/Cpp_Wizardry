#include "Struct.h"
#include <iostream>
#include <string>
using namespace std;

void Struct::LerDados() {

    for (int i = 0; i < 2; i++) {
        cout << "DIgite o nome do Aluno " << endl;
        cin >>this->alunos[i].nome;
        cout << "DIgite o sexo do Aluno " << endl;
        cin >>this->alunos[i].sexo;
        cout << "DIgite a idade do Aluno " << endl;
        cin >>this->alunos[i].idade;

        for (int j = 0; j <= 3; j++) {
            cout << "Digite as duas Notas " << endl;
            cin>>this->alunos[i].notas[j];
        }
    }
}

void Struct::MostrarDados() {

    for (int i = 0; i < 2; i++) {
        cout << " Nome do Aluno " << alunos[i].nome << endl;
        cout << " Idade dp Aluno " << alunos[i].idade << endl;
        cout << " Sexo do Aluno " << alunos[i].sexo << endl;
        for (int  j = 0; j<= 3; j++) {
            cout << " Notas do Aluno " << alunos[i].notas[j] << endl;

        }
    }

}







