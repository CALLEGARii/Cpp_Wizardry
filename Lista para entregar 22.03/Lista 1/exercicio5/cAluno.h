#ifndef CALUNO_H
#define CALUNO_H
#include <cstring>

using namespace std;

struct sAluno{
    
    char nome[40];
    float n1,n2,n3;
    int matricula;
};

class cAluno {
public:
    cAluno();
    cAluno(const cAluno& orig);
    virtual ~cAluno();
    
    void Ler_Dados();
    void Mostrar_Dados(sAluno* vetAluno, int qtde, int smatricula);
    float Calcular_Media(sAluno* vetAluno,  int qtde, int smatricula);
    
    
private:
    

};

#endif /* CALUNO_H */

