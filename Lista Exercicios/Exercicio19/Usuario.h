#ifndef USUARIO_H
#define USUARIO_H

class Usuario {
    
    double nota1, nota2, nota3;
    int opcao;
    
public:
    Usuario();
    Usuario(const Usuario& orig);
    virtual ~Usuario();
    
    void Ler_Dados();
    float Calculo();
    
private:

};

#endif /* USUARIO_H */

