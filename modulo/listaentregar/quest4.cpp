#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct Pessoa
{
    char n[30];
    char endereco[50];
    char numtel[10];
};

int main()
{
    int i, j;
    Pessoa p[5], aux[1];

    for (i = 0; i < 5; i++)
    {
        cout << "\n DIGITE O NOME " << i + 1 << ": ";
        cin >> p[i].n;
        cout << "\n DIGITE O ENDERECO :";
        cin >> p[i].endereco;
        cout << "\n DIGITE O TELEFONE :";
        cin >> p[i].numtel;
    };

    Pessoa aux1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (strcmp(p[j + 1].n, p[j].n) < 0)
            {
                aux1 = p[j];
                p[j] = p[j + 1];
                p[j + 1] = aux1;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        cout << "\n nome: " << p[i].n;
        cout << "\n endereco: " << p[i].endereco;
        cout << "\n telefone:" << p[i].numtel;
        cout << "\n ----------------------------";
        cout << "\n";
    }
}