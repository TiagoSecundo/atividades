#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> treino(50);
    int tam = 10;
    list<int>:: iterator it; //adicionar numeros na lista

    for (int i = 0; i < tam; i++)
    {
        treino.push_front(i);//inserir elementos no inico da lista
    }

    it = treino.begin();//
    advance(it,6) ; //posiçao que o numero entara na lista 
    treino.insert(it, 20);//numero que entrara na lista
    // treino .sort();

    cout << "tamanho lista: " << treino.size() << endl;

    for (int i = 0; i < tam; i++)
    {
       cout << treino.front()<< endl;
        treino.pop_front(); //retira o elemento da frente
    }
    return 0; 
}
