#ifndef CPESSOA_H
#define CPESSOA_H

#include <string>

using namespace std;

struct pessoa{
    long int cpf;
};

class cPessoa {
public:
        
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    
    void lerDados();
    //float calcIMC(pessoa x);
    void pesquisaSequencial(pessoa vetor[], int qtde, int cpf); 
    
    void bolha (pessoa vetor[], int qtde);
    void bolhaOtimizado(pessoa vetor[], int qtde);
    int pesquisaBinaria (pessoa vetor[], int qtde , int cpf);
    void imprimirVetor(pessoa vetor[], int qtde);
    
private:

};

#endif /* CPESSOA_H */
