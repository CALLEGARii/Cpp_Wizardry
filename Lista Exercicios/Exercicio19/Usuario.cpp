#include "Usuario.h"
#include <iostream>

using namespace std;

Usuario::Usuario() {
}

Usuario::Usuario(const Usuario& orig) {
}

Usuario::~Usuario() {
}

void Usuario::Ler_Dados(){
    
    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;

    cout << "Escolha o tipo de média:" << endl;
    cout << "1 - Média Aritmética" << endl;
    cout << "2 - Média Ponderada (3, 3, 4)" << endl;
    cout << "3 - Média Harmônica" << endl;
    cin >> opcao;
    
    this->Calculo();
   
}


float Usuario::Calculo(){
    
    double media = 0.0;
    
     switch (opcao) {
        case 1:
            media = (nota1 + nota2 + nota3) / 3.0;
            break;
        case 2:
            media = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10.0;
            break;
        case 3:
            media = 3.0 / ((1.0 / nota1) + (1.0 / nota2) + (1.0 / nota3));
            break;
        default:
            cout << "Opção inválida." << endl;
            return 1;
    }

    cout << "A média calculada é: " << media << endl;
            
    
}