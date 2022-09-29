#ifndef FILA_H
#define FILA_H
#include <iostream>

using namespace std;

#define MAXTAM 2

typedef struct TipoItem
{
    int id, cpf, telefone;
    string nome, soli;

} TipoItem;

typedef struct Fila
{
    TipoItem itens[MAXTAM];
    int inicio, fim, tamanho;
} TipoFila;

void FazFilaVazia(TipoFila *fila);
bool VerificaFilaVazia(TipoFila *fila);
bool VerificaFilaCheia(TipoFila *fila);
void Enfileira(TipoFila *fila, TipoItem item);
void Desenfileira(TipoFila *fila, TipoItem *item);
void ExibeFila(TipoFila *fila);
int Tamanho(TipoFila *fila);

#endif