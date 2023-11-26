#include <iostream>

using namespace std;

struct no{
  
  int valor;
  no* proximo;
  no* ant;
};

class Dupla_encadeada{

public:
      no *inicio, *aux, *fim; 

      Dupla_encadeada();
      ~Dupla_encadeada();
      void Menu();
      void inserir();
      void remover();
      void imprimir();
      no* pesquisar(int chave);
      void remover(int chave);

  private:


};