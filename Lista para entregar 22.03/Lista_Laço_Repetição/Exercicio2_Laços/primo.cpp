#include "primo.h"
#include <iostream>

using namespace std;

primo::primo() {
}

primo::primo(const primo& orig) {
}

primo::~primo() {
}


bool primo(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

