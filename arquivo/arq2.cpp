#include <iostream>
#include <fstream>

using namespace std;

int soma (int a, int b, int c);
int main ()
{
    int a=1, b=2, c = 3,result=0;
    ofstream soma1;
    soma1.open("soma.txt"); 
    result = soma(a,b,c);
    soma1 << result<< endl << a << endl << b << endl << c;


    return 0;
}
int soma (int a , int b, int c)
{
    return a+b+c;
}