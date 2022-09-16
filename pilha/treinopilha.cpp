#include <iostream>
#include <stack>

using namespace std;

int main (){

    stack <string> cartas;


    if (cartas.empty()) //verificar se a lista esta vazia
    {
        cout <<"pilha vazia "<<endl<<endl;
    }else {
        cout<< "pilha com cartas"<<endl;
    }
    
    cartas.push ("rei de copas");//push insere elementos na pilha
    cartas.push ("rei de espadas");
    cartas.push ("rei de ouro");
    cartas.push ("rei de paus");//topo da lista

        if (cartas.empty())
    {
        cout <<"pilha vazia "<<endl;
    }else {
        cout<< "pilha com cartas"<< endl;
    }

    while (!cartas.empty())//excluir todos os itens da pilha
    {
        cartas.pop();
    }
    

    cout << "tamanho da pilha " << cartas.size()<< endl;

    cout<<"carta do topo " <<cartas.top ()<< endl;

    cartas.pop();

   cout << "tamanho da pilha " << cartas.size()<< endl; 

   cout << "nova carta do topo " << cartas.top() << endl;

    return 0;
} 