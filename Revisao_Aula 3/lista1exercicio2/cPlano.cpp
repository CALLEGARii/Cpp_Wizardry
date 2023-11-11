#include <iostream>
#include <cmath> // Para usar a função pow() para elevar números

cPlano::cPlano() {
}

cPlano::cPlano(const cPlano& orig) {
}

cPlano::~cPlano() {
}

void cPlano::LerNumeros(){
 int r,s,d,a,b,c;

 
using namespace std;
    // Leitura dos números inteiros e positivos A, B e C
    cout << "Digite o valor de A: ";
    cin >> a;

    cout << "Digite o valor de B: ";
    cin >> b;

    cout << "Digite o valor de C: ";
    cin >> c;
}
 float cPlano::calcularDE(){
     
 using namespace std;       
    // Cálculo das expressões r e s
    r = pow(a + b, 2);
    s = pow(b + c, 2);

    // Cálculo da expressão d
    d = r + s / 2;
    
    return d;
  }
    
    
    


