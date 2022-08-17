/*Faça um programa que receba do usuário um arquivo
 texto e mostre na tela quantas linhas esse arquivo possui. 
 Teste com arquivos aleatórios e com múltiplas linhas*/
#include <iostream>
#include <fstream>
#include <windows.h>
 
using namespace std;

int contaLinhas() {
    ifstream arquivo;
    arquivo.open("numeros.txt");
    int linhas = 0;
    if (!arquivo.is_open()) {
        cerr << "ERRO! Não foi possível abrir o arquivo.\n";
        arquivo.clear();
    } else {
        cout << "Arquivo aberto com sucesso!\n";
    }

    while (!arquivo.eof()) {
        arquivo.ignore();
        arquivo.get();
        arquivo.ignore();
        linhas++;
    }
    arquivo.close();
    return linhas;
}
 
int main() {
   UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);
   
   cout << "Linhas do arquivo: " << contaLinhas() << endl;
   
   
   cout << endl;
   return 0;
}