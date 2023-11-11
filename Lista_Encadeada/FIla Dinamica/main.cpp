#include <iostream>
#include "filadinamica.h"

using namespace std;

int main(){

    filadinamica obj;
    TipoItem item;
    int opcao;


    cout << "Programa gerador de Fila:\n";

    do {
        cout << "[1] para inserir um elemento! " << endl;
        cout << "[2] para remover um elemento! " << endl;
        cout << "[3] para imprimir a Fila! " << endl;
        cout << "[0] para sair do programa! " << endl;
        cin >> opcao;

        if (opcao == 1){
            cout << "Digite o elemento a ser inserido: " << endl;
            cin >> item;
            obj.inserir(item);

        } else if (opcao == 2){
            item = obj.remover();
            cout << "Elemento Removido: " << item << endl;

        } else if (opcao == 3){
            obj.imprimir();
        }

    } while(opcao != 0);

    return 0;
}