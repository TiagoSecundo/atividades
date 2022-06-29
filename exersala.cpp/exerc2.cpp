#include <iostream>

using namespace std;

int potencia(int a, int b);
int main()
{
  
  cout << potencia(3, 4);

  cout << endl;
  return 0;
}
int potencia(int a, int b)
{ int pot = a;
  for (int i = 1; i < b; i++)// for pra limitar quantidade de multiplicaçao
  {
     pot = pot * a ; //recebendo valor de potencia e multiplicando pela base
  }
  return pot;
  }