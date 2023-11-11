#include "Altura.h"
#include <iostream>

using namespace std;

Altura::Altura() {
}

Altura::Altura(const Altura& orig) {
}

Altura::~Altura() {
     this->maior_altura = -1.0;
     this->menor_altura = 1000.0; 
}


void Altura::lerAlturas() {
    float altura;

    for (int i = 1; i <= 5; i++) {
        cout << "Digite a altura da " << i << "ª pessoa: ";
        cin >> altura;

       
        if (altura > this->maior_altura) {
            this->maior_altura = altura;
        }
        if (altura < this->menor_altura) {
            this->menor_altura = altura;
        }
    }
}

float Altura::getMaiorAltura() {
    return this->maior_altura;
}

float Altura::getMenorAltura() {
    return this->menor_altura;
}

void Altura::mostrarResultados() {
    cout << "A maior altura é: " << this->maior_altura << " cm" << endl;
    cout << "A menor altura é: " << this->menor_altura << " cm" << endl;
}