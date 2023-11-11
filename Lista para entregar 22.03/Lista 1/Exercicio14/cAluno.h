#ifndef CALUNO_H
#define CALUNO_H

class cAluno {
    
    double matricula;
    float n1,n2,n3;
    
    
public:
    cAluno();
    cAluno(const cAluno& orig);
    virtual ~cAluno();
    
    void Ler_Dados();
    float Calculo();
    
private:

};

#endif /* CALUNO_H */

