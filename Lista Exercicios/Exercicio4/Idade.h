      #ifndef IDADE_H
#define IDADE_H

class Idade {
public:
    Idade();
    Idade(const Idade& orig);
    virtual ~Idade();
    
    void Ler_Dados();
    void Mostrar_Dados(int idade, int anos , int meses, int dias);
    
private:

};

#endif /* IDADE_H */

