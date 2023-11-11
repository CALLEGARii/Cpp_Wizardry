
#ifndef ALTURA_H
#define ALTURA_H

class Altura {
    
    float maior_altura;
    float menor_altura;
    
public:
    Altura();
    Altura(const Altura& orig);
    virtual ~Altura();
     
    
    void lerAlturas(); 
    float getMaiorAltura();
    float getMenorAltura();
    float Mostrar_Dados();
    void mostrarResultados();
    
private:
    
     

};

#endif /* ALTURA_H */

