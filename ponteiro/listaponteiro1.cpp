/* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e
char. Associe as vari´aveis aos ponteiros (use &). Modifique os valores de cada vari´avel usando os
ponteiros. Imprima os valores das variaveis antes e apos as modificacoes.*/
#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *p;
    float b = 2.0;
    float *p1;
    char letra = 't';
    char *p2;
    cout << "antes da troca: " << a << endl
         << b << endl
         << letra << endl;
    p = &a;
    p1 = &b;
    p2 = &letra;

    *p = 9;
    *p1 = 10.0;
    *p2 = 'a';
    cout << "apos a troca " << a << endl
         << b << endl
         << letra << endl;
    return 0;
}