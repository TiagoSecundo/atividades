#include <iostream>
#include <windows.h>
#include "listaDE.hpp"

using namespace std;

void CriaListaEncadeadaVazia(TipoLista *lista)
{
    lista->primeiro = new TipoElemento;
    lista->ultimo = lista->primeiro;
    lista->ultimo->prox = NULL;
    lista->ultimo->ant = NULL;
}

bool VerificaListaEncadeadaVazia(TipoLista *lista)
{
    return (lista->primeiro->prox == lista->ultimo->ant);
}

int Tamanho(TipoLista *lista)
{
    return lista->tamanho;
}

void InsereListaInicioEncadeada(TipoLista *lista, TipoItem *item)
{
    Apontador aux = new TipoElemento;
    aux->item = *item;
    aux->prox = lista->primeiro->prox;
    aux->ant = lista->primeiro;
    lista->primeiro->prox = aux;
    if (lista->primeiro == lista->ultimo)
        lista->ultimo = aux;
    else
        aux->prox->ant = aux;
    lista->tamanho++;
}

void InsereUltimo(TipoLista *lista, TipoItem *item)
{
    Apontador aux = new TipoElemento;
    aux->item = *item;
    aux->prox = NULL;
    aux->ant = lista->ultimo;
    lista->ultimo->prox = aux;
    lista->ultimo = aux;
    lista->tamanho++;
}

void AtualizaUltimo(TipoLista *lista)
{
    Apontador aux;
    aux = lista->primeiro;
    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }
    lista->ultimo = aux;
}

void RemoveListaPrimeiro(TipoLista *lista, TipoItem *item)
{
    if (VerificaListaEncadeadaVazia(lista))
    {
        cout << "lista Vazia " << endl;
    }
    else
    {
        Apontador aux;
        aux = lista->primeiro->prox;
        lista->primeiro->prox = aux->prox;
        if (aux->prox != NULL)
        {
            aux->prox->ant = lista->primeiro;
        }
        else
        {
            lista->ultimo = lista->primeiro;
        }
        delete aux;
        lista->tamanho--;
    }
}

void RemoveListaUltimo(TipoLista *lista, TipoItem *item)
{
    if (VerificaListaEncadeadaVazia(lista))
    {
        cout << "lista Vazia " << endl;
    }
    else
    {
        Apontador aux;
        aux = lista->ultimo;
        lista->ultimo = aux->ant;
        lista->ultimo->prox = NULL;
        delete aux;
        lista->tamanho--;
    }
}

void RemoveItemPorID(TipoLista *lista, int id)
{
    if (VerificaListaEncadeadaVazia(lista))
    {
        cout << "lista Vazia " << endl;
    }

    Apontador aux;
    aux = lista->primeiro->prox;
    while (aux != NULL && aux->item.id != id)
    {
        aux = aux->prox;
    }
    if (aux != NULL)
    {
        aux->ant->prox = aux->prox;
        if (aux->prox != NULL)
        {
            aux->prox->ant = aux->ant;
        }
        else
        {
            lista->ultimo = aux->ant;
        }
        delete aux;
        lista->tamanho--;
    }
    else
    {
        cout << "Elemento não encontrado!";
    }
}

void ImprimeItem(TipoLista *lista, int id)
{
    if (VerificaListaEncadeadaVazia(lista))
    {
        cout << "lista Vazia " << endl;
    }
    Apontador aux;
    aux = lista->primeiro->prox;
    while (aux != NULL && aux->item.id != id)
    {
        aux = aux->prox;
    }
    if (aux != NULL)
    {
        cout << "ID: " << aux->item.id << endl;
        cout << "Nome: " << aux->item.nome << endl;
        Sleep(1500);
    }
    else
    {
        cout << "Elemento não encontrado!";
        Sleep(1500);
    }
}

void InsereItemAposElemente(TipoLista *lista, TipoItem *item, int id)
{
    if (VerificaListaEncadeadaVazia(lista))
    {
        cout << "lista Vazia " << endl;
    }
    Apontador aux = new TipoElemento;
    aux->item = *item;
    Apontador aux2 = lista->primeiro->prox;
    while (aux2->item.id != id)
    {
        aux2 = aux2->prox;
    }
}