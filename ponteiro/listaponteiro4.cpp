/*Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas duas variaveis
e troque o seu conteudo, ou seja, esta funcao e chamada passando duas variaveis A e B, por
exemplo, e apos a execucao da funcao, A contera o valor de B e B tera o valor de A.
*/
#include <iostream>

using namespace std;
void troca (int *a, int *b);
int main (){
    int a, b;
    cin >> a >> b;
    troca (&a,&b);
    cout << a << endl << b;
    return 0;
}
void troca (int *a, int *b)
{
    int aux = 0;
    aux = *a;
    *a = *b;
    *b = aux;  
}