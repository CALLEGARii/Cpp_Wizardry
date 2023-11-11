#ifndef CPRODUTO_H
#define CPRODUTO_H
#include <string>

using namespace std;

struct Produto{
     string nome;
     int codigo;
     float preço;
    
};
class cProduto {
public:
  

    cProduto();
    cProduto(const cProduto& orig);
    virtual ~cProduto();
    
    
    void ler_produto();
    void imprimir_Dados(Produto *vetProduto ,int qtde);
    void bolha(Produto *vetProduto, int qtde);
    void pesquisa_binaria(Produto *vetProduto, int chave ,int qtde);
    
    
private:

};

#endif /* CPRODUTO_H */

