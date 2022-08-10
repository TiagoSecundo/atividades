#include <iostream>
#include <windows.h>
#include "funcao.hpp"
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 double a, b;

 cin>> a;
 cin>> b;

 a = modulo(a); 
 b = modulo(b);

 cout<< soma(a,b)<< endl;
 cout<< sub(a,b)<< endl;
 cout<< mult(a,b)<< endl;
 cout<< divisao(a,b)<< endl;
 
  cout << endl << endl;
  return 0;
}