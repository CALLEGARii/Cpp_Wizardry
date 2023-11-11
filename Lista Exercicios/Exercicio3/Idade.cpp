#include "Idade.h"
#include <iostream>

using namespace std;

Idade::Idade() {
}

Idade::Idade(const Idade& orig) {
}

Idade::~Idade() {
}

void Idade::Ler_Dados(){
    
    int anos,meses,dias;
    
    cout<<"Digite o ano: " << endl;
    cin>> anos;
    
    cout<<"\nDigite o mes: " << endl;
    cin>> meses;
    
    cout<<"\nDigite os dias: " << endl;
    cin>>dias;
    
    this->Calculo(anos,meses,dias);
    
}



void Idade::Calculo(int anos, int meses, int dias){
    
    float calculo_idade;
    
    calculo_idade = (anos * 365) + (meses * 30) + dias;
    
    this->Mostrar_Dados(anos,meses,dias,calculo_idade);
}


void Idade::Mostrar_Dados(int anos, int meses, int dias, int calculo_idade){
    
    
    cout<<"\nA sua idade mostrada em dias: -> " << calculo_idade << endl;
   
    
}