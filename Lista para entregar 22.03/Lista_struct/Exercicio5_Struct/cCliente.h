#ifndef CCLIENTE_H
#define CCLIENTE_H
#include <cstring>

struct sCliente{
    
    char nome[40];
    int  cpf;
    
    
};


class cCliente {
public:
    cCliente();
    cCliente(const cCliente& orig);
    virtual ~cCliente();
    
    void Ler_Dados();
    void Mostrar_Dados(sCliente* vetPessoas, int qtde, int buscacpf, int deposito , int saque);
    void Busca_Cpf(sCliente* vetPessoas, int qtde, int buscacpf, int deposito , int saque);
    float Deposito_Cliente(sCliente* vetPessoas, int qtde, int buscacpf, int deposito , int saque);
    
private:

};

#endif /* CCLIENTE_H */

