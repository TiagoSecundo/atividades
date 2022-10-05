#include <iostream>

using namespace std;

int main()
{
    int *p;
    int vetor[10];
    p = &vetor[0]; // p = vetor = mesma coisas
    cout << p<< endl;

    // *(p++);//percorrer as posiçoes da memoria do vetor
    // cout << p<<endl;

    *p=10;//adiciona valor na variavel vetor[10]
    cout << vetor[0]<<endl;

    *(p++);
    *p=20;//mesma coisa de dizer vetor[0] = 10
    cout << vetor[1]<<endl;




    return 0;
}