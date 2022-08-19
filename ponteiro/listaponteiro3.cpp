/*Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do teclado. Em
seguida, compare seus enderecos e exiba o conteudo do maior endereco.*/
#include <iostream>

using namespace std;

int main ()
{
    int a=0, b = 0;
    cin >> a;
    cin >> b;
    if (&a > &b)
    cout << a << endl;
    else 
    cout << b << endl;
    return 0;
}