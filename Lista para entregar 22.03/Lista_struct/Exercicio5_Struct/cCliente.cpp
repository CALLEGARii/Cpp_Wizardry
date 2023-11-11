#include "cCliente.h"
#include <iostream>
#include <cstring>

using namespace std;

cCliente::cCliente() {
}

cCliente::cCliente(const cCliente& orig) {
}

cCliente::~cCliente() {
}

void cCliente::Ler_Dados(){
    int buscacpf=0;
    int qtde=0;
    int deposito =0;
    int saque =0;
    cout<<"Digite a quantidade de pessoas que deseja cadastrar: " << endl;
    cin>> qtde;
    
    
    sCliente vetPessoas[qtde];
    
    for(int i=0; i<qtde; i++){
        
        cout<<"Cadastro " << i + 1 << endl;
        cout<<"\nNome: " << endl;
        cin>> vetPessoas[i].nome;
        cout<<"CPF " << endl; 
        cin>> vetPessoas[i].cpf;
        
        
    }
    
    this->Mostrar_Dados(vetPessoas, qtde, buscacpf,deposito,saque);
    
}


void cCliente::Mostrar_Dados(sCliente* vetPessoas, int qtde, int buscacpf, int deposito , int saque){
    
    vetPessoas[qtde];
    
    for(int i=0; i<qtde; i++){
        
        cout<<"Dados Da Pessoas " << i + 1 << endl;
        cout<< "\nNome: " << vetPessoas[i].nome << endl; 
        cout<<"CPF " << vetPessoas[i].cpf << endl;
     
    }
   
    cout<<"Digite o cpf que deseja procurar e fazer o deposito: " << endl;
    cin>> buscacpf;
    
    this->Busca_Cpf(vetPessoas,qtde,buscacpf, deposito, saque);
    
}


void cCliente::Busca_Cpf(sCliente* vetPessoas, int qtde, int buscacpf, int deposito, int saque){
    
    for(int i=0; i<qtde; i++){
        
        if(buscacpf == vetPessoas[i].cpf){
            cout<<" Dados da Pessoa " << i + 1 << endl;
            cout<<"Nome: " << vetPessoas[i].nome << endl;
            cout<<"CPF: " << vetPessoas[i].cpf << endl;
       
            
        }
       
    }
      
    cout<<"Digite o valor do Deposito " << endl;
    cin>> deposito;
    
     cout<< this->Deposito_Cliente(vetPessoas,qtde,buscacpf,deposito,saque);
    
}


float cCliente::Deposito_Cliente(sCliente* vetPessoas, int qtde, int buscacpf, int deposito , int saque){
 char opcao = 's';

    while (opcao == 's') {
        if (deposito < 1000) {
            cout << "Depósito adicionado" << endl;
            cout << "\nDeseja sacar algum valor? Digite 's' para sacar: ou qualquer tecla para sair" << endl;
            cin >> opcao;

            if (opcao == 's') {
                cout << "Digite o valor que deseja sacar" << endl;
                cin >> saque;

                if (saque <= deposito) {
                    deposito -= saque;
                    cout << "O valor do saque foi R$ " << saque << " valor restante na conta R$ " << deposito << endl;
                } else {
                    cout << "Saldo insuficiente para o saque." << endl;
                }
            }
        } else {
            cout << "Você atingiu o limite de depósito" << endl;
            break;
        }
    }

    cout << "Sessão Finalizada" << endl;
    return deposito;
}

