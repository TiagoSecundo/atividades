#include <iostream>
#include <queue>
#define MAXTAM 20

using namespace std;

typedef struct Cliente
{
    int idade;
    string nome;
    bool gestante = false;
};

int main()
{
    Cliente cliente;
    queue<Cliente> fila, filaprioridade;

    for (int i = 0; i < MAXTAM; i++)
    {
        cout << "Insira nome: " << endl;
        cin >> cliente.nome;
        cout << "insira idade: " << endl;
        cin >> cliente.idade;
        cout << "Digite 1 se a cliente for gestante: " << endl;
        cin >> cliente.gestante;
        system("cls");
        if (cliente.idade > 60)
        {
            filaprioridade.push(cliente);
        }
       
        else if (cliente.gestante == 1)
        {
            filaprioridade.push(cliente);
        }
        else
        {
            fila.push(cliente);
        }
    }

    cout << "Fila prioritaria " << endl;

    while (!filaprioridade.empty())
    {
        cout << filaprioridade.front().nome << endl;
        filaprioridade.pop();
    }

    cout<< endl << "Fila: "<< endl;
    while (!fila.empty())
    {
        cout << fila.front().nome << endl;
        fila.pop();
    }

    return 0;
}