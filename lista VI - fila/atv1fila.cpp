#include <iostream>
#include <windows.h>
#include <queue>
#include <stack>
 
using namespace std;
 
int main() {
    queue <int> fila;
    stack <int> pilha1;
    int aux;

    fila.push(1);
    fila.push(2);
    fila.push(3);

    while (!fila.empty()){
        aux = fila.front();
        fila.pop();
        pilha1.push(aux);
    }

    cout<< pilha1.top()<< endl;

    while (!pilha1.empty()){
    aux = pilha1.top();
    pilha1.pop();
    fila.push(aux);
    }
    
    cout<< fila.front()<< endl;
    
  cout << endl << endl;
  return 0;
}