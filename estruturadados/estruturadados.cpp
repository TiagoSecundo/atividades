#include <iostream>
#include <windows.h>
#include <cstring>
using namespace std;

typedef struct Pessoa

{
    char nome[70];
    int idade;
    char endereco[200];
};

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    Pessoa pessoa;

    cout << "Insira nome: " << endl;
    cin.getline(pessoa.nome, 70);
    cout << "Insira idade: " << endl;
    cin >> pessoa.idade;
    cin.ignore();
    cout << "Insira endereço: " << endl;
    cin.getline(pessoa.endereco, 200);

    cout << "Nome: " << pessoa.nome << "\nidade: " << pessoa.idade << "\nendereço: " << pessoa.endereco << endl;

    cout << endl;
    return 0;
}