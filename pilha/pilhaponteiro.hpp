#ifndef PILHA_H

typedef struct TipoItem{
    int id;

};

typedef struct TipoElemento *Apontador;

typedef struct TipoElemento
{
    TipoItem item;
    struct TipoElemento *prox;
};

typedef struct TipoPilha {
    Apontador topo;
    int tamanho;
};

void FazPilhaVazia (TipoPilha *pilha);
bool verirficaPilhaVAzia (TipoPilha pilha);
void Empilha (TipoPilha *pilha, TipoItem item);
void Imprimepilha (TipoPilha *pilha);
void Desimpilha (TipoPilha *pilha, TipoElemento *item);
int Tamanho (TipoPilha *pilha);
int ConverteBinario (int binario);

#endif