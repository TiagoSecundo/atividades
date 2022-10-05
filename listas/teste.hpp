#ifndef LISTA_H
#define LISTA_H

#define MAXTAM 5 // tamanho maximo da pilha
#define INICIO 0 // posicao inicial da pilha

typedef int TChave; // tipo de dados da chave

typedef struct TCelula_str *TApontador; // ponteiro para TCelula

typedef struct
{
    TChave codigo; // codigo do projeto
    char nome[30]; // nome do projeto
    int horas;     // numero de horas trabalhas no projeto
} TProjeto;

typedef struct 
{
    TProjeto item[MAXTAM]; // vetor dos projetos
    int primeiro;          // primeiro da lista
    int ultimo;            // ultimo da lista
} TListaSequencial;

typedef struct
{
    TChave codfuncionario;     // codigo do funcionario
    char nomefuncionario[40];  // nome do funcionario
    char endereco[40];         // endereco do funcionario
    int dependentes;           // numero de dependentes do funcionario
    TListaSequencial projetos; // Lista Sequencial que guarda os projetos nos quais o funcionario trabalha
} TFuncionario;

typedef struct TCelula_str
{                      // Struct de cada celula da lista
    TFuncionario item; // item da celula funcionario
    TApontador prox;   // TApontador para o proximo da celula
} TCelula;

typedef struct
{                        // Struct da lista
    TApontador primeiro; // TApontador para o primeiro da lista
    TApontador ultimo;   // TApontador para o ultimo da lista
} TListaEncadeada;

void menu(); // imprime menu

// Funções TAD
void CriaListaVazia(TListaEncadeada *lista);                 // Cria uma lista encadeada vazia
int VerificaListaVazia(TListaEncadeada lista);               // Verifica se a lista encadeada está vazia
void CriaListaSequencialVazia(TListaSequencial *Lista);               // Cria uma lista sequencial vazia
int VerificaListaSequencialVazia(TListaSequencial lista);             // Verifica se a lista sequencial está vazia
void InsereEncadeada(TFuncionario f, TListaEncadeada *lista);         // Insere a lista encadeada
void InsereSequencial(TProjeto x, TListaSequencial *lista);           // Insere a lista sequencial
int BuscaEncadeada(TChave cod, TListaEncadeada lista, TApontador *p); // Busca a lista encadeada
int BuscaSequencial(int cod, TListaSequencial lista, int *p);         // Busca a lista sequencial

// Funções específicas
void CadastraFuncionario(TListaEncadeada *lista);           // Cadastra os funcionarios
void CadastraProjeto(TListaEncadeada *lista);               // Cadastra os projetos
void ImprimeProjetos(TListaSequencial Lista);               // Imprime os projetos
void ExcluirProjeto(TListaEncadeada *lista);                // Exclui os projetos
void ConsultaFuncionario(TListaEncadeada lista);            // Consulta os funcionarios
void ExcluirFuncSemProjetos(TListaEncadeada *lista);        // Exclui funcionarios sem projetos
void ExcluirFuncionario(TListaEncadeada *lista);            // Exclui funcionario
void ImprimeContraCheque(TListaEncadeada *lista);           // Imprime o contra cheque
void Remover(int p, TListaSequencial *lista, TProjeto *pj); // Remove funcionarios

#endif