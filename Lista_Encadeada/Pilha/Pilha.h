#include <iostream>

using namespace std;

struct no{
    
    int valor;
    struct no *ant;
    
};

class Pilha {
public:
    
    no *aux;
    no *topo;

    Pilha();
    ~Pilha();
    void menu();
    void inserir();
    int repartirMeio();
    struct no* mostrarEndereco();
    bool vazio(struct no *recebido);
    void remover();
    void mostrar();
    int mostrarValorMeio();
    bool pesquisar();
    
};