#ifndef LISTA_H
#define LISTA_H

typedef struct TipoItem {
    int id;
    char nome[50];
};

typedef struct TipoElemento *Apontador;

typedef struct TipoElemento {
    TipoItem item;
    Apontador prox;
    Apontador ant;
}TipoElemento;

typedef struct TipoLista {
    Apontador primeiro;
    Apontador ultimo;
    int tamanho;
}TipoLista;

bool ListaCriada = false;

void InsereItemAposElemente(TipoLista *lista, TipoItem *item, int id);
void ImprimeItem(TipoLista *lista, int id);
void RemoveItemPorID(TipoLista *lista, int id);
void RemoveListaUltimo(TipoLista *lista, TipoItem *item);
void RemoveListaPrimeiro(TipoLista *lista, TipoItem *item);
void AtualizaUltimo(TipoLista *lista);
void InsereUltimo(TipoLista *lista, TipoItem *item);
void InsereListaInicioEncadeada(TipoLista *lista, TipoItem *item);
int Tamanho(TipoLista *lista);
bool VerificaListaEncadeadaVazia(TipoLista *lista);
void CriaListaEncadeadaVazia(TipoLista *lista);
#endif 