typedef int TipoItem;

struct no // Node
{
    TipoItem valor;
    no* proximo;

};


class pilhadinamica{
private:

no* topo;


public:

 pilhadinamica();//construtor
 ~pilhadinamica();//destrutor
 bool estavazio();
 bool estacheio();
 void inserir(TipoItem item);
 TipoItem remover();
 void imprimir();//Mostrar na tela


};