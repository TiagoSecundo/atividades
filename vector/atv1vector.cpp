#include <iostream>
#include <windows.h>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    vector<int> num;

    srand(time(NULL));
    

    for (int i = 0; i < 20; i++)
    {
        num.push_back(rand()%10);
        cout << num[i] << " ";
        // cout << num.size() << " ";
        
    }

    
    cout << endl;
    return 0;
}