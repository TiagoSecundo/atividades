#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1, v2;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    v2.push_back(40);
    v2.push_back(50);
    v2.push_back(60);

    v1.swap(v1);

    cout << "v1 ";

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    v1.pop_back();

    cout << endl << "v2 ";

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v1[i] << " ";
    }
    return 0;
}