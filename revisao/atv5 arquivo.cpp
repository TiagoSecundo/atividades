#include <iostream>
#include <fstream>

typedef struct Compra {
    float preco = 0.0;
    string nome;
};

using namespace std;

int main (){
    ofstream arquivo;
    arquivo.open("arquivo.txt");
    int prod=0, preco=0, quantidade = 0;

    if (!arquivo.is_open()){
        cout << "Arquivo nao foi aberto ";
    }
    else{
        cout << "Insira quantidade do produtos da compra: " << endl;
        cin >> quantidade;
        Compra compra[quantidade];
        float soma = 0.0;
        for (int i =0 ; i < quantidade; i++)
        {
           cin >> compra[i].nome;
           cin >> compra[i].preco;
            soma += compra[i].preco;
        }
        for (int i =0 ; i < quantidade; i++){
            arquivo << compra[i].nome<< endl;
            arquivo << compra[i].preco << endl;
        }
        arquivo << "valor total: " << soma; 
        
    }
    return 0;
}