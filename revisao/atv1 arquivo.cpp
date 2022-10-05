/*Fa ̧ca um programa que verifique a existˆencia de um arquivo no diret ́orio com base no nome
fornecido pelo usu ́ario. Exemplo: o usu ́ario informou o nome “teste.txt”, vocˆe deve verificar se
existe este arquivo e retornar uma resposta positiva ou negativa.*/
#include <iostream>
#include <windows.h>
#include <fstream>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
    string x;

    cout << "\n Digite o nome do arquivo que deseja procurar: ";
    cin >> x;

    ifstream arquivo1S(x);

    arquivo1S.open(x);

    if (arquivo1S.is_open()){
        cout << "\n O arquivo existe!" << endl;
    }   
    else{
            cout << "\n O arquivo nÃ£o existe" << endl;
        }

    arquivo1S.close();

    cout << endl;
    return 0;