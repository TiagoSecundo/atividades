/*Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas
aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.*/
#include <iostream>

using namespace std;

int main ()
{
    int v[5];
    for (int i = 0; i < 5; i++)
    {
        cin >>  *(v+i);//pegando conteudo da posicao v+i 
        //cin >> *v+i; pegando o conteudo de v e somando conteudo de v + valor i 
    }
    for (int i = 0; i < 5; i++)
    {
        
        cout << *(v+i) * 2<< endl;
    }

    return 0;
}