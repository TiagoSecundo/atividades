/*Fa ̧ca um programa que permita ao usuario escolher a ordem de uma Matriz Quadrada que deseja.
Gere aleatoriamente n ́umeros inteiros para uma Matriz Quadrada da ordem escolhida (ex: 2x2,
3x3, 4x4, etc). Salve a matriz corretamente em uma planilha matriz.xls, respeitando a disposi ̧c ̃ao
de linhas e colunas.*/
#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main(){
    int ordem=0, matriz[2][2];
    //ifstream arquivo_matrix;
     ofstream arquivo_matrix;
    arquivo_matrix.open("matriz.xls");
    srand(time(NULL));
    cout << "Insira tamanho da matriz "<< endl;
    cin >> ordem;
    for (int i =0; i < 2; i++){
        for (int j = 0; j < 2; j ++){
            cout << "preencha matriz "<< endl;
            cin >> matriz[i][j];
            
        }
    }

    for (int i =0; i < 2; i++){
        for (int j = 0; j < 2; j ++){
            matriz[i][j] = rand();
            arquivo_matrix << matriz[i][j]<< " " <<endl;
        }
    }
    // arquivo_matrix.close();

    return 0;
}