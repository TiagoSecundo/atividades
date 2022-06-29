#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;
typedef struct Compromissos
{
    char horario[10];
    char data[50];
    char texto[500];
};

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    Compromissos compromisso;

    cout << "Insira horario: " << endl;
    cin >> compromisso.horario;
    cout << "Insira data: " << endl;
    cin.ignore();
    cin >> compromisso.data;
    cout << "Insira compromisso: " << endl << endl << endl;
    cin.ignore();
    cin.getline(compromisso.texto, 500);

    cout<<"Horario: " << compromisso.horario << "\nData: " << compromisso.data <<"\nCompromisso: " << compromisso.texto; 
   
    
    cout << endl;
    return 0;
}