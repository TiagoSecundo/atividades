#include <iostream>
#include <windows.h>
#define num 5

using namespace std;
typedef struct Carros
{
    string marca;
    int ano;
    double preco;
};

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    Carros carros[num];
    double preco1;

    for (int i = 0; i < num; i++)
    {
        cout << "Insira marca do carro: " << endl;
        cin >> carros[i].marca;
        cout << "Insira ano do carro: " << endl;
        cin >> carros[i].ano;
        cout << "Insira preço: " << endl<< endl << endl;
        cin >> carros[i].preco;
    }

    cout << "Insira preco do carro desejado: " << endl;

    cin >> preco1;
    for (int i = 0; i < num; i++)
    {
        if (carros[i].preco <= preco1)
        {
            cout << "Carro encontrado: " << carros[i].ano << endl << carros[i].marca << endl << carros[i].preco<< endl;
        }
    }
    cout << endl;
    return 0;
}