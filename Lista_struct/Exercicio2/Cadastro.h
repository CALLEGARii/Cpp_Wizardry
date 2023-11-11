#ifndef CADASTRO_H
#define CADASTRO_H

using namespace std;

  
class Cadastro {
public:
    
    struct sAluno{
    char nome[40], sexo;
    float peso, altura;
    int cpf;
 
  }; 
    
    Cadastro();
    Cadastro(const Cadastro& orig);
    virtual ~Cadastro();
    
    void lerDados();
    float localizaCalcMIC(sAluno* vetPessoas, int cpfBusca, int contador, int tamanho);
    float qtdePessoas();
private:
   
};

#endif /* CADASTRO_H */

