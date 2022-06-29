#include <iostream>
#include <windows.h>
#include "funcao.hpp"
#include <math.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    double a, b;

    cin >> a;
    cin >> b;
    a = modulo(a);
    b = modulo(b);

    cout <<  soma( a,  b)<< endl;
    cout <<  subtracao( a,  b) << endl;
    cout <<  multiplicacao( a, b) << endl;
    cout << divisao( a,  b) << endl;

    cout << endl;
    return 0;
}