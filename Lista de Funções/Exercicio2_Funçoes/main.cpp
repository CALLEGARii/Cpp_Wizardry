#include "calcularMedia.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    double nota1, nota2, nota3;
    char tipo;

    cout << "Digite as três notas do aluno: ";
    cin >> nota1 >> nota2 >> nota3;

    cout << "Digite 'A' para média aritmética ou 'P' para média ponderada: ";
    cin >> tipo;

    double media = calcularMedia(nota1, nota2, nota3, tipo);

    if (media == -1.0) {
        cout << "Opção inválida. Por favor, digite 'A' ou 'P'." << endl;
    } else {
        cout << "A média do aluno é: " << media << endl;
    }

    return 0;
}

