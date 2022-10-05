#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;
int soma(int a, int b, int c);
int ler_arquivo() 
{
    ofstream arquivo;
    ofstream arquivo1;
    arquivo.open("soma.txt");
    arquivo1.open("soma.dat");
    int resultado = 0, a = 0, b = 0, c = 0;   
    if (!arquivo.is_open())
    {
        cerr<<"ERRo ao abrir o arquivo ";
    }
        if (!arquivo1.is_open())
    {
        cerr<<"ERRo ao abrir o arquivo ";
    }
    cin >> a;
    cin >> b;
    cin >> c;
    resultado = soma(a, b, c);
    arquivo1 << resultado << endl;
    arquivo << a << endl << b << endl << c;

}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    ler_arquivo();

    cout << endl;
    return 0;
}
int soma(int a, int b, int c)
{
    return a + b + c;
}
