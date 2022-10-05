/*Fa ca um programa que permita que o usu ario entre com diversos nomes e telefones para um
cadastro (defina uma condic ao de parada). Crie um arquivo .xls com essas informa̧coes. Sua
planilha deve ter os nomes na coluna A e os telefones na coluna B.*/
#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  ofstream Arq;
  Arq.open("Lista de compra.xls");

  int op;
  string produto;
  float preco, total = 0, aux = 0;

  Arq << " Lista de produto \t\t Lista de valor\n";

  do
  {
    system("cls");
    cout << "1. Deseja adicionar um produto";
    cout << "\n2. Sair";
    cout << "\nSelecione uma opção: ";
    cin >> op;

    switch (op)
    {
    case 1:
      system("cls");
      cout << "Digite o nome do produto: ";
      cin >> produto;
      cout << "Digite o preço do produto: ";
      cin >> preco;

      Arq << endl
          << produto << "\t\t" << preco;
      aux = total + preco;
      total = aux;
      break;
    }

  } while (op != 2);

  Arq << "\n\nO valor total da compra: " << total;
  Arq.close();

  cout << endl;
  return 0;
}