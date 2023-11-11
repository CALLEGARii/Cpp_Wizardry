/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: veterano
 *
 * Created on 6 de outubro de 2023, 09:40
 */

#include <cstdlib>
#include <iostream>
#include "FILA.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char opcao='s';
    
    FILA obj;
    do{
        obj.Menu();
        cout<<"Deseja continuar? s";
        cin>>opcao;
    }while(opcao=='s');
    
    return 0;
}

