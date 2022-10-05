#include <iostream>
#include <windows.h>
#include <conio.h>
#include "teste.hpp"
#include "teste1.cpp"

using namespace std;


int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    system("cls"); // limpa tela

    TListaEncadeada lista; // chamando lista encadeada nomeando lista
    TApontador p;
    TFuncionario f;



    FILE *arquivo;
    arquivo = fopen("Funcionario.bin", "rb");
    p = lista.primeiro;

    if (arquivo != NULL)
    {
        while (fread(&f, sizeof(TFuncionario), 1, arquivo))
        {
            InsereEncadeada(f, &lista);
        }
        fclose(arquivo);
    }
    else
    {
        cout << "ERRO !!! ARQUIVO INEXISTENTE ...";
        getch();
        system("cls"); // limpa tela
    }

    int opcao;
    do
    {
        menu();                      // chamando menu
        cout << "ESCOLHA Á OPÇÃO: "; // escolha sua opção
        cin >> opcao;                // lendo opção
        system("cls");
        switch (opcao)
        { // escolha caso
        case 1:
            CadastraFuncionario(&lista);
            break;
        case 2:
            CadastraProjeto(&lista);
            break;
        case 3:
            ExcluirProjeto(&lista);
            break;
        case 4:
            ExcluirFuncSemProjetos(&lista);
            break;
        case 5:
            ConsultaFuncionario(lista);
            break;
        case 6:
            ExcluirFuncionario(&lista);
            break;
        case 7:
            ImprimeContraCheque(&lista);
            break;
        }
    } while (opcao != 8); // se for diferente de 7 vai sair

    arquivo = fopen("Funcionario.bin", "wb");

    while (p->prox != NULL)
    {
        f = p->prox->item;
        fwrite(&f, sizeof(TFuncionario), 1, arquivo);
        p = p->prox;
    }
    fclose(arquivo);

    cout << "FECHANDO PROGRAMA"; // for percorrendo um slepp para imprimir os pontinhos
    for (int i = 0; i <= 5; i++)
    {
        cout << ".";
        Sleep(500);
    }
    cout << "\n\nPRESIONE ENTER PARA ENCERRAR TOTALMENTE !!!";
    getch(); // função getch para parar antes do return
    return 0;
}