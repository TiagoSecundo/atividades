#ifndef LISTA_H
#define LISTA_H

#define MAXTAM 5
#define INICIO 1
typedef int TChave;

typedef struct Tipoelemento *TApontador;

typedef struct TProjeto
{
    TChave id;     // codigo do projeto
    char nome[30]; // nome do projeto
    int horas;     // numero de horas trabalhas no projeto
};

typedef struct TListaSequencial // projeto
{
    TProjeto item[MAXTAM];
    int primeiro;
    int ultimo;
};

typedef struct TFuncionario // dados funcionario
{
    int id;
    char nome[30];
    int numero;                // codigo do funcionario
    int dependentes;           // numero de dependentes do funcionario
    TListaSequencial projetos; // Lista Sequencial que guarda os projetos nos quais o funcionario trabalha
    endfuncionario endereco;
} TFuncionario;

typedef struct endfuncionario
{
    char rua[50];
    int numCasa;
    char bairo[20];
    char cidade[20];
    char estado[20];
};

typedef struct Tipoelemento // apontar funcionario
{
    TFuncionario item;
    TApontador prox;
};

typedef struct TListaEncadeada // posiçoes do projeto
{
    TApontador primeiro;
    TApontador ultimo;
    int tamanho = 0;
};

bool Listacriada = false;

void menu();
void includeFuncionario(TFuncionario funcionario);
void CriaListaVazia(TListaEncadeada *lista);
bool VerificaListaVazia(TListaEncadeada *lista);
int TamanhoLista(TListaEncadeada *lista);
void InsereListaUltimo(TListaEncadeada *lista, TFuncionario *item);
void ImprimeLista(TListaEncadeada lista);
int PesquisaFuncionario(TListaEncadeada *lista, int id);
void Imprime_funcionarios(TListaEncadeada *lista, int id);
void RemoveItemPorId(TListaEncadeada *lista, int id);

#endif