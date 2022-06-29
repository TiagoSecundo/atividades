#include <iostream>
#include <windows.h>
#include <math.h>
#define pi 3.14
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  float seno=0.0, cosceno=0.0, tangente=0.0, angulo=0.0;

  cout<< "insira valor do angulo: "<< endl;
  cin>>angulo;
  seno = sin(angulo*pi/180);
  cosceno = cos(angulo*pi/180);
  tangente =  tan(angulo*pi/180);
  cout<< seno << endl << cosceno << endl << tangente << endl;

  cout << endl;
  return 0;
}