#include <iostream>
#include <windows.h>
 
using namespace std;
 int maior (int a, int b);
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 int a = 8, b = 7, c = 8;
 cout<<maior ( a, b);
 

  
  cout << endl;
  return 0;
}
int maior (int a, int b, int c){
  if (a > b){
    return a; 
  }

}

