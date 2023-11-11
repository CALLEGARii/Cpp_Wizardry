#include "calcularDelta.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    double a, b, c;

    cout << "Digite o coeficiente 'a': ";
    cin >> a;

    cout << "Digite o coeficiente 'b': ";
    cin >> b;

    cout << "Digite o coeficiente 'c': ";
    cin >> c;

    double delta = calcularDelta(a, b, c);

    cout << "O valor do delta é: " << delta << endl;

    return 0;
}

