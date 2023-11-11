#include "cProduto.h"
#include <cstring>
#include <iostream>

using namespace std;

cProduto::cProduto() {
}

cProduto::cProduto(const cProduto& orig) {
}

cProduto::~cProduto() {
}

void cProduto::ler_produto() {
    int qtde;
    cout << "Digite a quantidade de produtos a ser cadastrado: " << endl;
    cin>> qtde;

    Produto vetProduto[qtde];

    for (int i = 0; i < qtde; i++) {


        cout << "Nome " << endl;
        cin >> vetProduto[i].nome;
        cout << "Código " << endl;
        cin >> vetProduto[i].codigo;
        cout << "Preço " << endl;
        cin >> vetProduto[i].preço;



    }

    this->imprimir_Dados(vetProduto, qtde);

}

void cProduto::imprimir_Dados(Produto *vetProduto, int qtde) {

    for (int i = 0; i < qtde; i++) {

        cout << vetProduto[i].nome << " " << vetProduto[i].codigo << endl;

    }

    this->bolha(vetProduto, qtde);

}

void cProduto::bolha(Produto* vetProduto, int qtde) {
    Produto temp;
    for (int i = qtde - 1; i >= 1; i--) {
        for (int j = 0; j < 1; j++) {
            if (vetProduto[j].codigo > vetProduto[j + 1].codigo) {
                temp = vetProduto[j];
                vetProduto[j] = vetProduto[j + 1];
                vetProduto[j + 1] = temp;

            }

        }

    }

    int codigoPesquisa;
    cout << "Informe o código do produto para acessar o preço: ";
    cin >> codigoPesquisa;

    this->pesquisa_binaria(vetProduto, codigoPesquisa, qtde);

}

void cProduto::pesquisa_binaria(Produto* vetProduto, int chave, int qtde) {


    int inf, sup, meio;
    inf = 0;
    sup = qtde - 1;
    while (inf <= sup) {
        meio = (inf + sup) / 2;
        if (chave == vetProduto[meio].codigo){
            cout << vetProduto[meio].nome << " " << vetProduto[meio].preço << endl;
            return;
        }
        else
            if (chave < vetProduto[meio].codigo)
            sup = meio - 1;
        else
            inf = meio + 1;

    }


}