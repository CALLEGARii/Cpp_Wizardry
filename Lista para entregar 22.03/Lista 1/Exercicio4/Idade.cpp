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
    int idade,anos,meses,dias;
    
    
    this->Mostrar_Dados(idade,anos,meses,dias);
    
}


void Idade::Mostrar_Dados(int idade, int anos, int meses, int dias){

    cout<<"Hellow " << endl;
    cout<<"Digite sua idade: " << endl;
    cin>>idade;
    
    anos = idade / 365;
     
    meses = idade / 12;
    
    dias = idade * 30;
      

    cout<<"A sua idade em anos: " << anos << " Meses " << meses << " Dias " << dias << endl;
    
    
    
}