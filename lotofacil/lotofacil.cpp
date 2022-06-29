#include <iostream>
#include <windows.h>
#include "loto.hpp"

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int v_cartela[25];
    int op;
    op = menu();
    switch (op)
    {
    case 1:
        // criar funcao preencher automatico v[15]
        break;
    case 2:
        // criar funcao escolha 15 numeros diferenete
        break;
    case 3:
        // compara (aposta)v[15] com (resultado) r[15] aleatorio
        break;
    case 4:
        break;

    default:
        break;
    }
    cartela(v_cartela);
    imprime_cartela(v_cartela);

    cout << endl;
    return 0;
}
