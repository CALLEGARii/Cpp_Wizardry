#include "Calculo.h"
#include <iostream>

using namespace std;

Calculo::Calculo() {
}

Calculo::Calculo(const Calculo& orig) {
}

Calculo::~Calculo() {
}

float Calculo::Ler_Dados(){
    
    cout << "Digite o sexo (M para masculino ou F para feminino): ";
    cin >> sexo;

    cout << "Digite a altura em metros: ";
    cin >> altura;

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        cout << "Sexo inválido." << endl;
        return 1;
    }

    cout << "O peso ideal é: " << peso_ideal << " kg" << endl;
    
    
}