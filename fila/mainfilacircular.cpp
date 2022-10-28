#include <iostream>
#include "filacircular.hpp"
#include "filacircular.cpp"

using namespace std;

int main (){
    TipoFila fila;
    TipoItem item;
    InicializaFilaCircular(&fila);

    for (int i =0; i < 5; i++)
    {
        item.valor = i+1;
        EnfileiraFilaCircular(&fila, item);
    }
    
    ImprimeCircular(&fila);
    cout << endl << endl << fila.fim->prox->item.valor;
    system ("pause");
    return 0;
}