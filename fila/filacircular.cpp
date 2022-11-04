#include <iostream>
#include "filacircular.hpp"

using namespace std;

void InicializaFilaCircular(TipoFila *fila)
{
    fila->inicio = NULL;
    fila->fim = fila->inicio;
    fila->tamanho = 0;
}

bool FilaCircularVazia(TipoFila *fila)
{
    return (fila->inicio == fila->fim);
}

void EnfileiraFilaCircular(TipoFila *fila, TipoItem item)
{
    Apontador novo = new TipoElemento;
    novo->item = item;
    novo->prox = NULL;

    if (FilaCircularVazia(fila))
    {
        fila->inicio = novo;
        
    }
    else
    {
        fila->fim->prox = novo;
        
    }
    fila->fim = novo;
    fila->fim->prox = fila->inicio;
    fila->tamanho++;
}

void DesenfileiraCircular(TipoFila *fila, TipoItem *item)
{
    Apontador aux = fila->inicio;
    if (FilaCircularVazia(fila))
    {
        cout << "Fila vazia " << endl;
        return;
    }

    *item = aux->item;
    fila->fim->prox = fila->inicio->prox;
    fila->inicio = fila->inicio->prox;
    delete aux;
    fila->tamanho--;
}

void ImprimeCircular(TipoFila *fila)
{
    if (FilaCircularVazia(fila))
    {
        cout << "fila vazia "<< endl;
        return;
    }
    Apontador aux = fila->inicio;
    for (int i = 0; i < fila->tamanho; i++)
    {
        cout << aux->item.valor << endl;
        aux = aux->prox;
    }
}