#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
  ofstream arquivoS;
  arquivoS.open("teste.txt", ios::app);

  arquivoS << " e continuar testando ";
  arquivoS <<"agora vai ";

  arquivoS.close();

  ifstream arquivoE;
  string linha;
  if (!arquivoE.is_open())
  {
    cout << "ERRO ao abrir o arquivo ";
    arquivoE.clear();
    return -1;
  }
   while (getline(arquivoE, linha))
    {
      cout << linha << endl;
    }

  cout << endl
       << endl;
  return 0;
}