#include <iostream>

using namespace std;

struct no{

    int valor;
    no* ant;   
};

class Pilha{
public:

    no *aux, *topo;

 Pilha();
 ~Pilha();
 void menu();
 void inserir();
 bool estavazio(struct no* recebido);
 void remover();
 bool pesquisar();
 int repartirMeio();
 int mostrarMeio();
 struct no* mostrarEndereco();
 void imprimir();

};

