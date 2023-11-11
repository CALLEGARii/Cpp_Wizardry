#include "Cadastro.h"
#include <string>
#include <iostream>

using namespace std;

Cadastro::Cadastro() {
}

Cadastro::Cadastro(const Cadastro& orig) {
}

Cadastro::~Cadastro(){
   
}

void Cadastro::lerDados(){
    const int MAX_PESSOAS = 5;
    char opcao;
    int cpfBusca=0; 
    int contador;
    
  
    sAluno vetPessoas[MAX_PESSOAS];
    
    do{
        cout<<"Digite seu nome: " << endl;
        cin >>vetPessoas[contador].nome;
        cout<<"Digite sua altura: " << endl;
        cin >>vetPessoas[contador].altura;
        cout<<"Digite seu peso: " << endl;
        cin >>vetPessoas[contador].peso;
        cout<<"Digite seu cpf: " << endl;
        cin >>vetPessoas[contador].cpf;
        cout <<"Digite seu sexo: " << endl;
        cin >>vetPessoas[contador].sexo;
        contador++;
                
        cout <<"Deseja continuar cadastrando? S para continuar: " << endl;
        cin >> opcao;
        
        }while ((opcao == 'S') && (contador < MAX_PESSOAS));
        
        cout <<"DIgite um cpf para localizar e calcular IMC: " << endl;
        cin >>cpfBusca;
        cout <<this->localizaCalcMIC(vetPessoas,cpfBusca,contador,5);
}

float Cadastro::localizaCalcMIC(sAluno* vetPessoas, int cpfBusca, int contador, int tamanho) {
    float imc;
    for (int i=0; i<contador; i++){
        if(cpfBusca == vetPessoas[i].cpf)
            imc=vetPessoas[i].peso/(vetPessoas[i].altura*vetPessoas[i].altura);
            
    }
    return imc;
    
}
    
    
    
