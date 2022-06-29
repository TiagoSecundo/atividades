#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int matrix[5][5];
    int menor=999999, maior=0;
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrix[i][j] = rand();
            
            if (matrix[i][j] > maior){
                maior = matrix[i][j];
                
            }
            if (matrix[i][j] < menor){
                menor = matrix[i][j];
                
            }
            cout << matrix[i][j]<<"\t";
            
        } 
        cout << endl;
    }
    cout << " "<< maior << " " << menor;
    cout << endl;
    return 0;
}