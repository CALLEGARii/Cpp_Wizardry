#include "cPlano.h"
#include <iostream>
#include <cmath>

using namespace std;

cPlano::cPlano() {
}

cPlano::cPlano(const cPlano& orig) {
}

cPlano::~cPlano() {
}

void cPlano::lerPontos(){

cout<<"Digite ponto x1";
cin>>this->x1; //this indica os atributos
cout<<"Digite ponto y1";
cin>>this->y1;
cout<<"Digite ponto x2";
cin>>this->x2;
cout<<"Digite ponto y2";
cin>>this->y2;
}

float cPlano::calcularDE(){

float d = 0.0;
d = sqrt( pow(this->x2 - this->x1, 2) + pow(this->y2 - this->y1, 2));

return d;

}




