#include <iostream>
#include <queue>
#define MAXTAM 3

using namespace std;

int main()
{
    queue<int> fila, furafila;
    int a, aux;

    while (fila.size() != MAXTAM)
    {
        cout << "Insira numero: " << endl;
        cin >> a;
        fila.push(a);
    }
    cout << endl
         << fila.front() << endl<< endl;

    aux = fila.back();
    furafila.push(aux);
    while (!fila.empty())
    { 
        furafila.push(fila.front());
        fila.pop();
    }

    for (int i = 0; i < MAXTAM; i++)
    {
        cout << furafila.front() << endl;
        furafila.pop();
    }
    return 0;
}