
#ifndef STRUCT_H
#define STRUCT_H

struct Dados {
    char nome;
    float notas[3];
    char sexo;
    int idade; 
};    
    
class Struct {
    
    Dados alunos[2];
    
    Struct(const Struct& orig);
    virtual ~Struct();
    
    void LerDados();
    void MostrarDados();
private:
   

};

#endif /* STRUCT_H */

