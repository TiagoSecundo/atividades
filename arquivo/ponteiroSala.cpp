#include <iostream>
#include <windows.h>
 
using namespace std;
void ordena (int *p1, int *p2,int *p3);
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 int a=5, b=3,c=1;
 int *p1, *p2, *p3;
 
  p1 = &a;
  p2 = &b;
  p3 = &c;
 
 
  cout << endl;
  return 0;
}
void ordena (int *p1, int *p2,int *p3)
{
    if (*p1 < *p2 && *p2 < *p3){
        return;
    }
    if (*p2 < *p3)
    {
        int aux=0;
        aux = *p1;
        *p1 = *p2;
        *p2 = aux; 
    }
    if (*p1 < *p3)
    {
                int aux=0;
        aux = *p1;
        *p1 = *p2;
        *p2 = aux; 
    }
}