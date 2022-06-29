#include <iostream>
#include <windows.h>
using namespace std;
bool verirfica_cep(char cep[8]);
int main()
{
  char cep[50];
  int tam = 0;
  cout << "Insira cep: "<< endl;
  cin.getline(cep, 50);
  tam = strlen(cep); // contador de caracter na frase
  if (tam == 8)
  {
    if (verirfica_cep)
    {
      cout << "CEP valido ";
    }
  }
  else
  {
    cout << "CEP invalido ";
  }
}

bool verirfica_cep(char cep[8])
{
  for (int i = 0; i < 8; i++)
  {
    if (!isdigit(cep[i]))// verifiica se e numero 
    {
      return false;
    }
    return true;
  }
}