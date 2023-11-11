#include <iostream>
#include "pilhadinamica.h"

using namespace std;

int main(){

    pilhadinamica obj;
    TipoItem item;
    int opcao;

    cout << "Programa gerador de pilha:\n";

    do {
        cout<< "\n---------- MENU ---------- " << endl;
        cout << "[1] Inserir elemento! " << endl;
        cout << "[2] Remover elemento! " << endl;
        cout << "[3] Imprimir a pilha! " << endl;
        cout << "[0] Parar o programa! " << endl;
        cout<< endl;
        cin >> opcao;

        if (opcao == 1){
            cout << "\nDigite o elemento.... " << endl;
            cin >> item;
            obj.inserir(item);

        } else if (opcao == 2){
            item = obj.remover();
            cout << "\nElemento Removido.... " << item << endl;

        } else if (opcao == 3){
            obj.imprimir();
        }

    } while(opcao != 0);

    return 0;
}