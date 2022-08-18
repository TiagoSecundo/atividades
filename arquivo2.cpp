#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;
void atividade()
{
    ofstream arquivo;
    arquivo.open("atividade.txt");
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    cout << "char ocupa-----: " << sizeof(char) << " byte(s)" << endl;
    cout << "short ocupa-----: " << sizeof(short) << " byte(s)" << endl;
    cout << "int ocupa------: " << sizeof(int) << " byte(s)" << endl;
    cout << "long ocupa-----: " << sizeof(long) << " bytes(s)" << endl;
    cout << "float ocupa----: " << sizeof(float) << " byte(s)" << endl;
    cout << "double ocupa---: " << sizeof(double) << " byte(s)" << endl;
    cout << "long double ocupa---: " << __SIZEOF_LONG_DOUBLE__    << " byte(s)" << endl;
    cout << "bool ocupa-----: " << sizeof(bool) << " byte(s)" << endl;


    cout << endl;
    return 0;
}