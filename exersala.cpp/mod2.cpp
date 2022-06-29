#include <iostream>
#include <windows.h>

using namespace std;
string binario(int a);

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int a = 0;
    cin >> a;
    cout << binario(a);

    cout << endl;
    return 0;
}
string binario(int a)
{
    string d;
    while (a != 0)
    {
        d += (a % 2 == 0 ? "0" : "1" );
        a /= 2;
    }
    return d;
}