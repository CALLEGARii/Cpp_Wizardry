#include "cFabrica.h"
#include <iostream>

using namespace std;

cFabrica::cFabrica() {
}

cFabrica::cFabrica(const cFabrica& orig) {
}

cFabrica::~cFabrica() {
}

void cFabrica::Ler_Dados(){
    double custo=0;
    const double distribuidor=0.28;
    const double impostos=0.45;
    
    cout<<"Digite o custo da Fabrica: " << endl;
    cin>> custo;

    this->Calculo(distribuidor,impostos, custo);
    
}

void cFabrica::Calculo(int distribuidor, int impostos, int custo){
    
    double custo_consumidor = custo + (custo * distribuidor) + (custo * impostos);
    
    
    cout<<"O custo do carro ficara em: " << custo_consumidor << endl;
    
}
