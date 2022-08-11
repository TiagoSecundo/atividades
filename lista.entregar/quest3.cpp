#include <iostream>
#include <windows.h>
 
using namespace std;
 
typedef struct{
    string titulo, categoria, autor, editora;
    int ano, paginas;
}livros;

int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
 string titulo;
 livros livros[5];

 for(int i = 0; i < 5; i++){
    livros[i].titulo = " ";
    livros[i].categoria = " ";
    livros[i].autor = " ";
    livros[i].editora = " ";
    livros[i].paginas = 0;
    livros[i].ano = 0;
 } 
 
 for(int i = 0; i < 5; i++){
    system("cls");
    cout<<"Digite o titulo do livro: ";
   
    getline(cin, livros[i].titulo);
    
    cout << endl;
    cout<<"Digite a categoria do livro: ";
    getline(cin, livros[i].categoria);

    cout << endl;
    cout<<"Digite o autor do livro: ";
    getline(cin, livros[i].autor);

    cout << endl;
    cout<<"Digite o nome da editora: ";
    getline(cin, livros[i].editora);

    cout << endl;
    cout<<"Digite a quantidade de paginas tem no livro: ";
    cin.ignore();
    cin>>livros[i].paginas;
    
    cout << endl;
    cout<<"Digite o ano do livro: ";
    cin>>livros[i].ano;
    cout << endl;
    cin.ignore();
 }

 system("cls");
 cout<<"Digite o titulo do livro que deseja: ";
 cin.ignore();
 getline(cin, titulo);

for(int i = 0; i < 5; i++){
   
   if(strstr(livros[i].titulo.c_str(), titulo.c_str())){
        cout<< endl;
        cout<<"O titulo do livro é: "<<livros[i].titulo;

        cout<< endl;
        cout<<"A categoria do livro é: "<<livros[i].categoria;

        cout<< endl;
        cout<<"O autor do livro é: "<<livros[i].autor;

        cout<< endl;
        cout<<"O nome da editora é: "<<livros[i].editora;

        cout<< endl;
        cout<<"A quantidade de paginas é de: "<<livros[i].paginas<<" paginas.";

        cout<< endl;
        cout<<"O ano do livro é: "<<livros[i].ano;
        cout<< endl;
   }
}
 
 
  cout << endl;
  return 0;
}