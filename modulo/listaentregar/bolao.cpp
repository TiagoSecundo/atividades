#include <iostream>
#include <time.h>
 
using namespace std;

string n[100];
int p[6];
int chute[100][6];
int chute_totais[100];
int i=0;

void mostraResultado(){
    cout << "Resultado dos Jogos: " << endl;
    for(int j=0; j<3; j++){
        cout << "Jogo" << j << " " << p[j] << " x " << p[j+3] << endl;
    }
    cout << "Resultado do Bolão: ";
    for(int j=0; j<i; j++){
        cout << n[j] << ": " << chute_totais[j] << " p" << endl;
    }
}

void geraResultados(){
    for(int j=0;j<i;j++){
        for(int k=0;k<3;k++){
            if(chute[j][k]==p[k]){
                chute_totais[j]+=5;
            }if(chute[j][k+3]==p[k+3]){
                chute_totais[j]+=5;
            }if(chute[j][k] > chute[j][k+3] && p[k] > p[k+3]){
                chute_totais[j]+=10;
            }if(chute[j][k] < chute[j][k+3] && p[k] < p[k+3]){
                chute_totais[j]+=10;
            }
            if(chute[j][k] == chute[j][k+3] && p[k] == p[k+3]){
                chute_totais[j]+=10;
            }
        }
    }
}

void mostra_chute(){
    srand(time(NULL));
    for(int j=0;j<6;j++){
        p[j]=rand()%6;
    }
}

void listachutes(){
    cout << "Lista de chute" << endl;
    for(int j=0;j<i;j++){
        cout << "Palpite do " << n[j] << ": " << endl;
        for(int k=0;k<3;k++){
            cout << k << "º jogo: " << chute[j][k] << " x " << chute[j][k+3] << endl;
        }
    }
    system("pause");

}

void registraPalpites(){
    cout << "Digite o nome do jogador: ";
    cin >> n[i];
    for(int j=0; j<3;j++){
       cout << "Pontuação do time 1 no " << j+1 << "º jogo: ";
       cin >> chute[i][j];
       cout << "Pontuação do time 2 no " << j+1 << "º jogo: ";
        cin >> chute[i][j+3];
    }
    i++;
}

void desenharMenu(){
    system("cls");
    cout << "__________________________________________" << endl;
    cout << "Bolão" << endl;
    cout << "1 - Registrar chute" << endl;
    cout << "2 - Listar chute" << endl;
    cout << "3 - Conferir resultados e Sair" << endl;
    cout << "__________________________________________" << endl;
}

int main() {
    int opcao;
    mostra_chute();
    desenharMenu();
    cin >> opcao;
    while(opcao!=3){
        switch(opcao){
            case 1:
                registraPalpites();
                break;
            case 2:
                listachutes();
                break;
            default:
                cout << "Opção inválida" << endl;
                break;
        }
        desenharMenu();
        cin >> opcao;
    }
    geraResultados();
    mostraResultado();
    return 0;
}