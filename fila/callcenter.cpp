#include <iostream>
#include <windows.h>
#include "funcoes fila.cpp"

#define MAXAM 10
 
using namespace std;
 
int main() {
    TipoFila fila;
    TipoItem item;


    FazFilaVazia(&fila);

    for(int i =0; i < MAXTAM; i++)
    {
        cout<<"Insira nome: "  << endl;
        cin >> item.nome;
        cout <<"Insira CPF: (apenas Numero) " << endl;
        cin >> item.cpf;
        cout << "Insira telefone: (apenas numero)" << endl;
        cin >> item.telefone;
        cout << "Insira Solicitacao de atendimento: " << endl;
        cin >> item.soli;
        Enfileira(&fila, item);
    }
    ExibeFila(&fila);

    for(int i =0; i < MAXTAM; i++){
        Desenfileira(&fila, &item);
        cout << item.nome << endl << item.cpf << endl << item.telefone << endl << item.soli<< endl;
    }
  
 
  cout << endl << endl; 
  return 0;
}