#include <iostream>

using namespace std;

struct no{

    int valor;
    no* proximo;
};

class Fila{
private:

    no *primeiro, *aux, *ultimo;

public:

    Fila();
    ~Fila();
    void Menu();
    bool estavazio(struct no *recebido);
    void inserir();
    void remover();
    void imprimir();
    bool pesquisar();
    int MostrarMeio();
    struct no* mostrarEndereco();
    int mostrarElementomeio();

};