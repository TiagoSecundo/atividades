#include <iostream>
#include <windows.h>

using namespace std;
float alunos(float a, float b);
char notafinal(int a);

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
  float nota1 = 0.0, nota2 = 0.0, media[2];
  for (int i = 0; i < 2; i++)
  {
    cout << endl <<"insira nota primeiro bimestre: (peso 4)" << endl;
    cin >> nota1;
    cout << "insira nota segundo bimestre: (peso 6)" << endl;
    cin >> nota2;
    media[i] = alunos(nota1, nota2);
    cout << "media das notas: " << media[i] << endl;
    cout << notafinal(media[i]);

  
  }
  cout << endl;
  return 0;
}

float alunos(float a, float b)
{
  float c = 4, d = 6;
  return ((a * c) + (b * d)) / (c + d);
}

char notafinal(int a)
{
  if (a >= 9)
    return 'A';
  if (a >= 7)
    return 'B';
  if (a >= 5)
    return 'C';
  if (a < 5)
    return 'D';
}