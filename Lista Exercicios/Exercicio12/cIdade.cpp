#include "cIdade.h"
#include <iostream>

using namespace std;

cIdade::cIdade() {
}

cIdade::cIdade(const cIdade& orig) {
}

cIdade::~cIdade() {
}

void cIdade::Ler_Dados(){
    int idade=0;
    
    
    cout<<"Digite a idade do Nadador: " << endl;
    cin>> idade;
    
    
    if(idade >= 5 && idade <=7){
        
       cout<<"\nCategoria A (INFANTIL) " << endl;
    }
    
    if(idade >=8 && idade <=10){
        
        cout<<"Categoria B (INFANTIL) " << endl;
    }
    
    if(idade >=11 && idade <=13){
        
        cout<<"Categoria A (JUVENIL) " << endl;
    }
    
    if(idade >=14 && idade <=17){
        
       cout<<"Categoria B (JUVENIL) " << endl; 
    }
    
    if(idade >=18){
        
        cout<<"Categoria C (ADULTO) " << endl;  
    }
    
    
}

