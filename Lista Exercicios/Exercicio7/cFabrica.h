#ifndef CFABRICA_H
#define CFABRICA_H

class cFabrica {
    
public:
    cFabrica();
    cFabrica(const cFabrica& orig);
    virtual ~cFabrica();
    
    void Ler_Dados();
    void Calculo(int distribuidor , int impostos, int custo);
    
    
private:

};

#endif /* CFABRICA_H */

