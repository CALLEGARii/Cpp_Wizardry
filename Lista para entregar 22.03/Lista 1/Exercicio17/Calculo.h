
#ifndef CALCULO_H
#define CALCULO_H

class Calculo {
    
    char sexo;
    double altura, peso_ideal;
    
public:
    Calculo();
    Calculo(const Calculo& orig);
    virtual ~Calculo();
    
    float Ler_Dados();
    
    
private:

};

#endif /* CALCULO_H */

