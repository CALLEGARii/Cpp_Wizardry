#include <iostream>

using namespace std;

// Fila Dinâmica

typedef  int TipoItem;

struct no{

   TipoItem valor;
   no* proximo;

};

class filadinamica{
private:
       
    no* primeiro;
    no* ultimo;
       

public:

   filadinamica(); // construtor
   ~filadinamica(); // destrutor
   bool estavazio();
   bool estacheio();
   void inserir(TipoItem item); // push
   TipoItem remover(); // pop
   void imprimir(); // Mostrar na tela

};