#include "encontrarMenor.h" 
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int num1, num2;
    cout << "Digite dois números inteiros: ";
    cin >> num1 >> num2;

    int menor = encontrarMenor(num1, num2);

    cout << "O menor número é: " << menor << endl;

    return 0;
}

