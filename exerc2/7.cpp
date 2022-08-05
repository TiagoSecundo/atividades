#include <iostream>
#include <windows.h>

using namespace std;
typedef struct Telefone
{
    char ddd[3];
    char numero[9];
};

typedef struct Endereco
{
    char cidade[50];
    char estado[50];
    char cep[15];
    char email[50];
};
typedef struct Empresa {
 char razao_social[50];
 char nome_fantasia[50];
 char cnpj[15];
 Endereco endereco;
 };

    int main()
    {
        UINT CPAGE_UTF8 = 65001;
        UINT CPAGE_DEFAULT = GetConsoleOutputCP();
        SetConsoleOutputCP(CPAGE_UTF8);
        
        cout << endl;
        return 0;
    }