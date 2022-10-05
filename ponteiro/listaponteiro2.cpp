/*Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e exiba o
maior endereco.*/
#include <iostream>

using namespace std;

int main (){
    int a=0, b=0;


    if(&a > &b)
    {
        cout << &a << endl;
    }
    else {
        cout << &b<< endl;
    }

    return 0;
}