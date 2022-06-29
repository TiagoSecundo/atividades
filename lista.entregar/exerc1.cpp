#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;
typedef struct Cadastro
{
    char nome[200];
    int idade;
    char sexo;
    char cpf[20];
    char nascimento[20];
    int setor;
    char cargo[50];
    double salario;
};

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    Cadastro cadastro;

    cout << "Insira nome: " << endl;
    cin.getline(cadastro.nome, 200);
    cout << "Insira idade: " << endl;
    cin >> cadastro.idade;
    cout << "Insira sexo: (m/f): " << endl;
    cin >> cadastro.sexo;
    cout << "Insira CPF: " << endl;
    cin.ignore();
    cin.getline(cadastro.cpf, 20);
    cout << "Insira data de nascimento: " << endl;
    cin.ignore();
    cin.getline(cadastro.nascimento, 20);
    cout << "Insira setor de trabalho: " << endl;
    cin >> cadastro.setor;
    cout << "Insira cargo na empresa: " << endl;
    cin.ignore();
    cin.getline(cadastro.cargo, 50);
    cout << "Insira salario: " << endl;
    cin.ignore();
    cin >> cadastro.salario;
    system("cls");

    cout << "Cadastro dados pessoais:" << endl
         << cadastro.nome << endl
         << cadastro.idade << endl
         << cadastro.cpf << endl
         << cadastro.sexo << endl
         << endl;
    cout << "Cadastro dados profissionais: " << endl
         << cadastro.cargo << endl
         << cadastro.setor << endl
         << cadastro.salario << endl
         << endl
         << endl;

    cout << endl;
    return 0;
}