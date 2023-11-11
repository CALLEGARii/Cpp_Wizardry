#ifndef IDADE_H
#define IDADE_H

class Idade {
   
public:
    Idade();
    Idade(const Idade& orig);
    virtual ~Idade();
    
    void Ler_Dados();
    void Calculo(int anos, int meses, int dias);
    void Mostrar_Dados(int anos, int meses, int dias, int calculo_idade);
    
private:

};

#endif /* IDADE_H */

