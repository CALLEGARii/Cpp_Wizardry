#include <iostream>
#include "cPessoa.h"
#include <cmath>

using namespace std;


cPessoa::cPessoa() {
}

cPessoa::cPessoa(const cPessoa& orig) {
}

cPessoa::~cPessoa() {
}

void cPessoa::lerDados(){
    int qtde=0;

    cout<<"Digite a qtde de pessoas"<<endl;
    cin>>qtde;
    pessoa vetor[qtde];



    for (int i=0; i<qtde; i++){
         cout<<"Digite cpf"<<endl;
        cin>>vetor[i].cpf;
    }
    int cpf=0;
    cout<<"Digite o cpf a ser pesquisado"<<endl;
    cin>>cpf;

   // this->pesquisaSequencial(vetor, qtde, cpf);

    this->imprimirVetor(vetor, qtde);
    cout<<endl;
    this->bolha(vetor, qtde);
    //this->bolhaOtimizado(vetor, qtde);
    this->imprimirVetor(vetor, qtde);
}

/*float cPessoa::calcIMC(pessoa x){
    float imc = 0.0;
    cout<<"teste";
    imc = x.peso/pow(x.altura,2);
    return imc;
            
}*/


/*void cPessoa::pesquisaSequencial(pessoa vetor[], int qtde, int cpf){
    bool achou = false;
    float imc2;
    for(int i=0;i<=qtde;i++){
        if(cpf == vetor[i].cpf){
            //cout<< this->calcIMC(vetor[i]);
            achou=true;
        }
    }
    if(!achou)
         cout<<"Pessoa não encontrada"<<endl;
}

//ORDENAÇAO
*/void cPessoa::bolha (pessoa vetor[], int qtde) {
    int i, j, cont=0;
    pessoa temp;
    for (i= qtde-1; i >= 1; i--) {
        for (j= 0; j < i ;j++) {
            if (vetor[j].cpf > vetor[j+1].cpf) {
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
                cont++;
            }  
        }
         cout<<"Repetiçoes: "<<cont<<endl;
    }
    
}


/*void cPessoa::bolhaOtimizado(pessoa A[], int qtde) {
    int i, j, cont=0;
    pessoa temp;
    bool troca;
    troca = true;
    for (i= qtde-1; (i >= 1) && (troca == true); i--) {
        troca = false;
        for (j= 0; j < i ;j++){
            if (A[j].cpf > A[j+1].cpf) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                troca = true;
                cont++;
          }
       }
       
    }
    cout<<"Repetiçoes: "<<cont<<endl;
}
*/

//PESQUISA
int cPessoa::pesquisaBinaria (pessoa k[], int qtde , int cpf){
    int inf,sup,meio;
    inf=0;
    sup=qtde-1;
    while (inf<=sup){
        meio=(inf+sup)/2;
        if (cpf==k[meio].cpf)
            return meio;
        else
            if (cpf<k[meio].cpf)
                sup=meio-1;
            else
                inf=meio+1;
    }
    return -1; /* não encontrado */
}


void cPessoa::imprimirVetor(pessoa vetor[], int qtde){

    for (int i=0; i<qtde; i++){
        cout<<vetor[i].cpf;
    }
}

