#include <iostream>

using namespace std;

struct no{

    int valor;
    no* proximo;
};

class Fila{
public:
    
    int meio;
    no *primeiro, *ultimo, *aux;


    Fila();
    ~Fila();
    void Menu();
    void inserir();
    void remover();
    bool estavazio(struct no *recebido);
    bool verificarFila();
    void MostrarMeio();
    struct no* mostrarEndereco(int meio);
    bool pesquisar();
    void imprimir();
};