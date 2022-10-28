#include <iostream>
#include "pilhaponteiro.hpp"

using namespace std;

void FazPilhaVazia (TipoPilha *pilha){
    pilha->topo = NULL;
    pilha->topo = 0;
}

bool verirficaPilhaVAzia (TipoPilha pilha){
    if(pilha.tamanho == 0){
        return true;
    }
    return false;
}

void Empilha (TipoPilha *pilha, TipoItem item){
    Apontador aux  = new TipoElemento;
    aux->item = item;
    aux->prox = pilha->topo;
    pilha->tamanho ++;
}



void Imprimepilha (TipoPilha *pilha){
    Apontador aux;
    aux = pilha->topo;
    while (aux != NULL){
        cout << pilha->topo->item.id << endl;
        aux = aux->prox;
    }
}

void Desimpilha (TipoPilha *pilha, TipoItem *item){
    Apontador aux;
    if (FazPilhaVazia){
        cout <<"pilha vazia..."<< endl;
    }
    else {
    aux = pilha->topo; 
    *item = aux->item;
    pilha->topo = aux->prox;
    delete aux;
    pilha->tamanho--;
    }
}

int Tamanho (TipoPilha *pilha){
    return pilha->tamanho;
}

int ConverteBinario (int binario){
    
}