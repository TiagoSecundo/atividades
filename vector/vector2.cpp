#include <iostream>
#include <windows.h>
#include <vector>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
    vector<int> v1, v2;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    int tam = v1.size();

    cout << "primeiro valor de v1 " << v1.front() << endl;
    cout << "ultimo valor de v1 " << v1.back() << endl;
    cout <<"valor do meio " << v1.at(tam/2)<< endl;
    
 
 
  cout << endl;
  return 0;
}