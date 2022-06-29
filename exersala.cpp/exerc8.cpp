#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

int main()
{
 
    char nomes_1[50], nomes_2[50], nomes_3[50];
    int num = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0;
    cout << "Insira nome: " << endl;
    cin.getline(nomes_1, 50);
    cout << "Insira nome: " << endl;
    cin.getline(nomes_2, 50);
    cout << "Insira nome: " << endl;
    cin.getline(nomes_3, 50);

    num = strcmp(nomes_1, nomes_2);
    num2 = strcmp(nomes_1, nomes_3);
    num3 = strcmp(nomes_2, nomes_1);
    num4 = strcmp(nomes_2, nomes_3);
    num5 = strcmp(nomes_3, nomes_1);
    num6 = strcmp(nomes_3, nomes_2);

    if(num < num2 && )
    


cout << endl;
return 0;
}