#include "Pilha.h"
#include <iostream>

using namespace std;

int main(){

    Pilha obj;
    TipoItem item;
    int opcao;

    cout<<"Sistema gerador de pilha..... " << endl;

    do{
        cout<<"\n---------- MENU ---------- " << endl;
        cout<< "[1] Iserir Elemento: " << endl;
        cout<< "[2] Remover Elemento: " << endl;
        cout<< "[3] Pesquisar Elemento: " << endl;
        cout<< "[4] Listar Elementos: " << endl;
        cout<< "[0] Sair do Sistema: " << endl;
        cout<< endl;
        cin >> opcao;

        if(opcao == 1){

            cout<<"\nDigite um Elemento.... " << endl;
            cin>> item;
            obj.inserir(item);

        }else if(opcao == 2){
                obj.remover();
            cout << "\nElemento Removido.... " << item << endl;

        }else if(opcao == 3){

            cout<< "\nDigite o elemento para ser pesquisado.... " << endl;
            cin >> item;
            obj.pesquisar(item);

        }else if(opcao == 4){
            obj.imprimir();
         
        }

    }while (opcao != 0);

    return 0;
}