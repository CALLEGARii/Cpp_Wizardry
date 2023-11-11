#ifndef SALUNO_H
#define SALUNO_H

using namespace std;

class sAluno {
public:

    struct AlunoData{
     char nome[40];
     long int matricula;
     float n1,n2;
    };
    

    sAluno();
    sAluno(const sAluno& orig);
    virtual ~sAluno();
    
    void lerDados();
    void mostrarDados();
private:
    static const int MAX_ALUNOS = 3;
    AlunoData vetAlunos[MAX_ALUNOS];
    int contador;

};

#endif /* SALUNO_H */

