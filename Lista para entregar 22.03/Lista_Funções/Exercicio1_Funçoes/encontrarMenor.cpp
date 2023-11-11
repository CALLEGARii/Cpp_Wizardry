#include "encontrarMenor.h"
#include <iostream>

using namespace std;

encontrarMenor::encontrarMenor() {
}

encontrarMenor::encontrarMenor(const encontrarMenor& orig) {
}

encontrarMenor::~encontrarMenor() {
}

int encontrarMenor(int numero1, int numero2) {
    if (numero1 < numero2) {
        return numero1;
    } else {
        return numero2;
    }
}