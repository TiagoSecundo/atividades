#include <iostream>
#include <windows.h>
 
using namespace std;
int menor (int a, int b){
  if (a < b){
    cout << a;
  }   if (a > b){
    cout << b;
}
}
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

 int num1=10, num2=15;
  menor(num1, num2);


  cout << endl;
  return 0;
}