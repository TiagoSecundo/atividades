#include <iostream>
#include <windows.h>
#include <cstring>
using namespace std;

typedef struct Pessoa

{
    char nome[70];
    char cpf[20];
    double peso;
    int altura;
    char sexo;
};

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    Pessoa pessoa;
    int v[3];
    double imc;
    for (int i = 0; i < 3; i++)
    {
        
        cout << "Insira nome: " << endl;
        cin.getline(pessoa.nome, 70);
        cout << "Insira cpf: " << endl;
        cin >> pessoa.cpf;
        cin.ignore();
        cout << "Insira altura em centimetros: " << endl;
        cin >> pessoa.altura;
        cout << "Insira peso: " << endl;
        cin >> pessoa.peso;
        cout << "Insira sexo: (m/f)" << endl;
        cin >> pessoa.sexo;      
    }
     imc = pessoa.peso  / pessoa.altura * pessoa.altura;

    cout<< "Insira CPF para procurar IMC:";
    cout<< "Nome: " << pessoa.nome << "\ncpf: " << pessoa.cpf << "\naltura: " << pessoa.altura << "\npeso" << pessoa.peso << "\nsexo " << pessoa.sexo << endl;

    cout << endl;
    return 0;
}