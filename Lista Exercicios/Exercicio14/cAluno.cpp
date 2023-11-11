#include "cAluno.h"
#include <iostream>

using namespace std;

cAluno::cAluno() {
}

cAluno::cAluno(const cAluno& orig) {
}

cAluno::~cAluno() {
}

void cAluno::Ler_Dados(){
    
    cout << "Digite a matricula do Aluno: ";
    cin >> matricula;

    cout << "\nDigite a primeira nota: ";
    cin >> n1;

    cout << "Digite a segunda nota: ";
    cin >> n2;

    cout << "Digite a terceira nota: ";
    cin >> n3;

    this->Calculo();
}


float cAluno::Calculo(){
    
     double maior_nota = n1;
     
    if (n2 > maior_nota) {
        maior_nota = n2;
    }
    if (n3 > maior_nota) {
        maior_nota = n3;
    }

    double media_ponderada = (n1 * 3 + n2 * 3 + n3 * 4) / 10.0;

    cout << "\nMatricula do aluno: " << matricula << endl;
    cout << "\nNotas: " << n1 << ", " << n2 << ", " << n3 << endl;
    cout << "\nMédia ponderada: " << media_ponderada << endl;

    if (media_ponderada >= 5.0) {
        cout << "\nSituação: APROVADO" << endl;
    } else {
        cout << "\nSituação: REPROVADO" << endl;
    }
    
    
    return media_ponderada;
    
}