#include <iostream>
#include <windows.h>
#include "lista.hpp"

#define MAXTAM 5

using namespace std;
void menu()
{
    cout << " _________________________________________________________ " << endl;
    cout << "|                                                         | " << endl;
    cout << "|      Bem-vindo ao menu de cadastro de funcionarios      |" << endl;
    cout << "|                                                         | " << endl;
    cout << "|_________________________________________________________| " << endl
         << endl
         << endl;
    cout << " Insira a opção desejada: (1 ao 6) " << endl;
    cout << "1 Inclusão de um novo funcionário. " << endl;
    cout << "2 Inclusão de novos projetos para um funcionario. " << endl;
    cout << "3 Exclusão de projetos de um funcionario. " << endl;
    cout << "4 exclusão de um funcionario que nao trabalha em nenhum projeto. " << endl;
    cout << "5 Consulta de um funcionário. " << endl;
    cout << "6 Imprime contra-cheque. " << endl;
    system("cls");
}

void includeFuncionario(TFuncionario funcionario)
{
    cout <<"_______________________________ " << endl;
    cout<<"|                               |" << endl;
    cout<<"|       Novo Funionario         |" << endl;
    cout<<"|                               |" << endl;
    cout<<"|_______________________________|" << endl<< endl << endl;
    cout << "Insira nome do funcionario: " << endl;
    cin.ignore();
    cin.getline(funcionario.nome, 30);
    cout << "Insira rua: " << endl;
    cin.ignore();
    cin.getline(funcionario.endereco.rua, 50);
    cout << "Insira bairro: " << endl;
    cin.ignore();
    cin.getline(funcionario.endereco.bairo, 20);
    cout << "Insira cidade: " << endl;
    cin.ignore();
    cin.getline(funcionario.endereco.cidade, 20);
    cout << "Insira numero da casa: " << endl;
    cin >> funcionario.endereco.rua;
    system("cls");
}

void CriaListaVazia(TListaEncadeada *lista)
{
    if (!Listacriada)
    {
        lista->primeiro = new Tipoelemento;
        lista->ultimo = lista->primeiro;
        lista->ultimo->prox = NULL;
        cout << "Lista criada com sucesso!";
        Listacriada = true;
    }
    else
    {
        cout << "Lista já existe!";
    }
    Sleep(1500);
}

bool VerificaListaVazia(TListaEncadeada *lista)
{
    return (lista->primeiro == lista->ultimo);
}

int TamanhoLista(TListaEncadeada *lista)
{
    return lista->tamanho;
}

void InsereListaUltimo(TListaEncadeada *lista, TFuncionario *item)
{
    lista->ultimo->prox = new Tipoelemento;
    lista->ultimo = lista->ultimo->prox;
    lista->ultimo->item = *item;
    lista->ultimo->prox = NULL;
    lista->tamanho++;
}

void ImprimeLista(TListaEncadeada lista)
{
    if (VerificaListaVazia(&lista))
    {
        cout << "Lista vazia!\n";
        Sleep(1000);
        return;
    }
    TApontador aux;
    aux = lista.primeiro->prox;
    while (aux != NULL)
    {
        cout << "ID: " << aux->item.id << endl;
        cout << "Nome: " << aux->item.nome << endl
             << endl;
        aux = aux->prox;
    }
    system("pause");
}

int PesquisaFuncionario(TListaEncadeada *lista, int id)
{
    TApontador aux;
    aux = lista->primeiro->prox;
    while (aux != NULL)
    {
        if (aux->item.id == id)
        {
            return aux->item.id;
        }
        aux = aux->prox;
    }
    return -1;
}

void Imprime_funcionarios(TListaEncadeada *lista, int id)
{
    TApontador aux;
    aux = lista->primeiro->prox;
    while (aux != NULL)
    {
        if (aux->item.id == id)
        {
            cout <<"_______________________________ " << endl;
            cout<<"|                               |" << endl;
            cout<<"|      Dados do funcionario     |" << endl;
            cout<<"|                               |" << endl;
            cout<<"|_______________________________|" << endl<< endl << endl;
            cout << "ID: " << aux->item.id << endl;
            cout << "Nome: " << aux->item.nome << endl;
            cout << "Quantidade de dependentes: " << aux->item.dependentes << endl;
            cout << "Rua: " << aux ->item.endereco.rua << endl;
            cout << "Numero da casa: " << aux ->item.endereco.rua << endl;
            cout << "Bairro: " << aux ->item.endereco.bairo << endl;
            cout << "Cidade: " << aux ->item.endereco.cidade << endl;
            cout << "Estado: " << aux ->item.endereco.estado<< endl;
            system("cls");

            break;
        }
        aux = aux->prox;
    }
}

void RemoveItemPorId(TListaEncadeada *lista, int id)
{
    if (VerificaListaVazia(lista))
    {
        return;
    }

    TApontador aux, anterior, x;

    x = lista->primeiro;

    while (x != NULL)
    {
        if (x->prox->item.id == id)
        {
            anterior = x;
            break;
        }

        x = x->prox;
    }


    aux = anterior->prox;
    anterior->prox = aux->prox;
    delete aux;
    lista->tamanho--;
}

// void consultaFuncionario (TListaEncadeada, )
// {

// }