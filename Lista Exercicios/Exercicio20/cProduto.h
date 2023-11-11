#ifndef CPRODUTO_H
#define CPRODUTO_H

class cProduto {
    
    int codigo=0;
    int quantidade=0;
    
public:
    cProduto();
    cProduto(const cProduto& orig);
    virtual ~cProduto();
    
    void Menu();
    void Ler_Dados();
    float Calculo();
    
    
private:

};

#endif /* CPRODUTO_H */

