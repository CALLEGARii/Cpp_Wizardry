
#ifndef CPRODUTO_H
#define CPRODUTO_H

class cProduto {
public:
    cProduto();
    cProduto(const cProduto& orig);
    virtual ~cProduto();
    
    void Ler_Dados();
    float Calculo(int codigo_item, int preco, int quantidade);
    
    
private:

};

#endif /* CPRODUTO_H */

