#include "Tempo.h"
#include <iostream>

using namespace std;

Tempo::Tempo() {
}

Tempo::Tempo(const Tempo& orig) {
}

Tempo::~Tempo() {
}




void Tempo:: tempo(){
    int duracao_segundos;

    cout << "Digite o tempo de duração em segundos: ";
    cin >> duracao_segundos;
    
    
    this->segundos = segundos;
    horas = minutos = segundos_restantes = 0;
    
    this->Ler_Dados();
    
}

void Tempo::Ler_Dados(){
    
    horas = segundos / 3600;
    minutos = (segundos * 3600) / 60;
    
    this->Mostrar();
    
}


void Tempo::Mostrar(){
    
     cout << "Tempo de duração: " << horas << " horas, " << minutos << " minutos, " << endl;
    
    
}