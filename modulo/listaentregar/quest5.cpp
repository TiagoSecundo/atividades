#include <iostream>
#include <string.h>

using namespace std;

typedef struct Casado
{
    char nome[30];
    char sexo;
    int idade;
};

typedef struct Solteiro
{
    char nome[30];
    char sexo;
    int idade;
};

int main()
{
    char nome[30];
    char sexo;
    int idade;
    char estadoCivil;

    Casado casados[2];
    Solteiro solteiros[2];

    int totalC = 0, totalS = 0;

    for (int i = 0; i < 2; i++)
    {
        cout << "Nome: ";
        cin.getline(nome, 30);
        cout << "Sexo M ou F: ";
        cin >> sexo;
        cout << "Idade: ";
        cin >> idade;
        cout << "Estado Civil C ou S: ";
        cin >> estadoCivil;
        cin.ignore();
        if (estadoCivil == 'C' || estadoCivil == 'c')
        {
            strcpy(casados[totalC].nome, nome);
            casados[totalC].sexo = sexo;
            casados[totalC].idade = idade;
            totalC++;
        }
        else if (estadoCivil == 'S' || estadoCivil == 's')
        {
            strcpy(solteiros[totalS].nome, nome);
            solteiros[totalS].sexo = sexo;
            solteiros[totalS].idade = idade;
            totalS++;
        }
    }

    int totalMachos = 0, totalMulher = 0;
    cout<<endl;

    for (int i = 0; i < totalS; i++)
    {
        cout << "Solteiro: " << solteiros[i].nome << endl;
        if (solteiros[i].sexo == 'M' || solteiros[i].sexo == 'm')
        {
            totalMachos++;
        }
        if (solteiros[i].sexo == 'F' || solteiros[i].sexo == 'f')
        {
            totalMulher++;
        }
    }
    cout << "Total Solteiros: " << totalMachos << "\nTotal Solteiras: " << totalMulher<<endl;

    for (int i = 0; i < totalC; i++)
    {
        cout<<"Casado: ";
        cout << casados[i].nome << endl;
    }
    cout << "Total de Casados: " << totalC;

    return 0;
}