#ifndef CALUNO_H
#define CALUNO_H
#include <string>

struct sAluno{
    
    char nome[40];
    int matricula;
    float n1,n2,n3; 
};


class cAluno {
public:
    cAluno();
    cAluno(const cAluno& orig);
    virtual ~cAluno();
    
    void Ler_Dados();
    void Mostrar_Dados(sAluno* vetAlunos, int sMatricula, int qtde);
    float Calcular_Media(sAluno* vetAlunos, int sMatricula, int qtde);
    
    
private:

};

#endif /* CALUNO_H */

