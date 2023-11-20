#include <iostream>

using namespace std;

struct no{
    
    int valor;
    no *ant;

};

class Pilha{
private:

    int meio;
    no *aux, *topo;

public:

    Pilha();
    ~Pilha();
    void Menu();
    bool estavazio(struct no *recebido);
    void inserir();
    void remover();
    void imprimir();
    void mostrarMeio();
    struct no* mostrarEndereco(int meio);
    void pesquisar();
    
};