#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    while (!v1.empty())
    {
        cout <<endl << "v1: ";

        for (int i = 0; i < v1.size(); i++)
        {
            cout << v1[i] << " ";
        }
        v1.erase(v1.end() - 1);
    }

    v1.clear();

    cout << endl;
    return 0;
}