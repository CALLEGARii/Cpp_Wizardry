typedef int TipoItem;


struct no{

   TipoItem valor;
   no* proximo;

};


class Pilha{
private:

no* topo;

public:

Pilha();
~Pilha();
bool estaVazio();
bool estaCheio();
bool pesquisar(TipoItem item);
void inserir(TipoItem item);
TipoItem remover();
void imprimir();

};