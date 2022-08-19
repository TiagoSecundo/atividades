/*Crie uma funcao que receba como parametro um array e o imprima. Nao utilize ındices para
percorrer o array, apenas aritmetica de ponteiros*/
#include <iostream>

using namespace std;
void imrpime ();

int main()
{
    cout << imrpime ();
    return 0;
}
void imrpime ()
{
    int v[5];
    for (int i = 0; i <5; i++)
    {
        cin >>  *(v+i);
    }
        for (int i = 0; i < 5; i++)
    {
        
        cout << *(v+i) << endl;
    }
}