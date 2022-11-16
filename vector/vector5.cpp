#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    vector<int> v1(5, 10);

    v1.resize(10, 0);
    v1.emplace(v1.begin(), 15);

    cout << "\nv1";

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }


    cout << endl<< "tamanho de v1 "<< v1.size();
    return 0;
}