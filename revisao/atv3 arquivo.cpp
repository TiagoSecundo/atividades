/*Fa ̧ca um programa que receba um vetor de 10 numeros, converta cada um desses numeros para
binario e grave o resultado em um arquivo texto. Cada n ́umero deve ser gravado em uma linha.*/
#include <iostream>
#include <windows.h>
#include <fstream>
 
using namespace std;

int binario(int numero);
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int numero[10];

  ofstream arquivo3S;
  
  arquivo3S.open("Binarios.txt");

  for (int i = 0; i < 10; i++){
  cout << "\n Digite o número que deseja: ";
  cin >> numero[i];
  }

  cout << "\n Conversão feita com sucesso!";

  arquivo3S << "\n" << "\n Número digitado ------------- Binario";
  for (int i = 0; i < 10; i++)
  {
  arquivo3S << "\n\t" << numero[i] << " ------------------ " << binario(numero[i]);
  }
  arquivo3S.close();

  ifstream arquivo3E;

  arquivo3E.open("Binarios.txt");

  if (!arquivo3E.is_open())
  {
    cout << "\n O Aquivo não está aberto!";
    cout << "\n O Arquivo pode ter sido apagado!";
  }
  cout << endl;
  return 0;
}
int binario(int numero)
{
    return (numero == 0)?0: binario(numero/2)*10 + numero % 2;
}