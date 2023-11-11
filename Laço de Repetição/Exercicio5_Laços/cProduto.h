#ifndef CPRODUTO_H
#define CPRODUTO_H
#include <string>

struct sProduto{
    
    char nome[40];
    int produto;
    int codigo;
    
    
};

class cProduto {
public:
    cProduto();
    cProduto(const cProduto& orig);
    virtual ~cProduto();
    
    
    void menu();
    void Ler_Dados(int produto, int qtde);
    void Mostrar_Dados(sProduto* vetProduto, int valor_total);
    
private:

};

#endif /* CPRODUTO_H */

