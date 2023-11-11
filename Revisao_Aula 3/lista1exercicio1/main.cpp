#include "cPlano.h"
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv){
    
    cPlano obj;
    
    obj.lerPontos();
    cout << obj.calcularDE();
}