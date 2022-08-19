/*Crie um programa que contenha uma funcao que permita passar por parametro dois numeros
inteiros A e B. A funcao devera calcular a soma entre estes dois numeros e armazenar o resultado
na variavel A. Esta funcao nao devera possuir retorno, mas devera modificar o valor do primeiro
parametro. Imprima os valores de A e B na funcao principal (main).
*/
#include <iostream>

using namespace std;
void calculaSoma (int *a, int *b);

int main()
{
    int a=0, b=0;
    cin >> a >> b;
    calculaSoma(&a, &b);
    return 0;
} 
void calculaSoma (int *a, int *b)
{
    *a += *b;
}
