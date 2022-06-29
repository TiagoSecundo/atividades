#include <iostream>
#include <time.h>

using namespace std;

int menu()
{
    int op;
    do
    {
        system("cls");
        cout << "-----------------------------" << endl;
        cout << "|   BEM VINDO A LOTOFACIL   |" << endl;
        cout << "-----------------------------" << endl
             << endl
             << endl;
        cout << " INSIRA A OPCAO DE PREENCHIMENTO: " << endl;
        cout << "1. Preenchemneto automatico. " << endl;
        cout << "2. Escolher os numeros. " << endl;
        cout<< "3. resultado "<< endl;
        cout<<"4. Sair " << endl;
        cout<< "Opcao ";
        cin>> op;

    } while (op < 1 || op > 4 );
}
void cartela(int a[])
{
    int v_cartela[25];
    int aux = 1;
    for (int i = 0; i < 25; i++)
    {
        a[i] = aux;
        aux++;
    }
}
void imprime_cartela(int a[])
{
    for (int i = 0; i < 25; i++)
    {
        cout << a[i] << " ";
    }
}