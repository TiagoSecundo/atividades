#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    char senha[30];
    char confirmacao[30];
    char nome [50];
    cout<<"Insira seu nome "<< endl;
    cin.getline(nome, 50);//conta todos os caractres 
    cout << "Insira sua senha: " << endl;
    cin.getline(senha, 30);
    cout << "Confirme sua senha: " << endl;
    cin.getline(confirmacao, 30);
    if (strcmp(senha, confirmacao) == 0)//comparar um string a outra
    {
        cout << "Cadastro feito com sucesso. "<< endl;
    }
    else
    {
        cout << "Senha incorreta. "<< endl;
    }

    cout << endl;
    return 0;
}