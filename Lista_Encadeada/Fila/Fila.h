#include <iostream>

using namespace std;

struct no{

    int valor;
    no* proximo;
};

class Fila{
public:

    no *inicio, *aux, *fim;

    Fila();
    ~Fila();
    void Menu();
    void inserir();
    bool estavazio(struct no* recebido);
    void remover();
    bool pesquisar();
    struct no* mostrarEndereco();
    int repartirMeio();
    int mostrarElementoMeio();
    void imprimir();

};

