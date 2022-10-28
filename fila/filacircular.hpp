#ifndef FILA_H
#define FILA_H


typedef struct TipoItem
{
    int valor;
    
} TipoItem;

typedef struct TipoElemento *Apontador;

typedef struct TipoElemento
{
    TipoItem item;
    Apontador prox;
} TipoElemento;

typedef struct TipoFila
{
    Apontador inicio, fim;
    int tamanho;
} TipoFila;

void InicializaFilaCircular(TipoFila *fila);
bool FilaCircularVazia(TipoFila *fila);
void EnfileiraFilaCircular(TipoFila *fila, TipoItem item);
void DesenfileiraCircular(TipoFila *fila, TipoItem *item);
void ImprimeCircular(TipoFila *fila);
#endif 