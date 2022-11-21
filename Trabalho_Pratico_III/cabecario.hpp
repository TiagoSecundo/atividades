#ifndef FILA_H
#define FILA_H
#include <iostream>
#include <queue>

#define MAXTAM 5 

using namespace std;

typedef struct //salva respostas da triagem em um vetor
{
    char salva_respostas_triagem[18];
}Triagem;

typedef struct TipoItem //guarda dados dos pacientes 
{
    Triagem triagem;
    int prioridade;
    string nome;
    char endereco[50];
    int idade;
    char sexo;
} TipoItem;

typedef struct TipoElemento *Apontador;

typedef struct TipoElemento
{
    TipoItem item;
    Apontador prox;
} TipoElemento;


typedef struct TipoFila
{
    Apontador inicio, fim;
    int tamanho;
} TipoFila;

typedef struct { //guradar dados dos medicos 
    string nome;
    bool medico_livre = true; 
    string crm;
    string especialidade;
    time_t comeco_atendimento;
    int tempo_atendimento;
    TipoItem paciente_atendido;
}DadosMedicos;

typedef struct 
{
    int quantidade_medicos = 0;
    DadosMedicos dados_medicos[MAXTAM];
    int pacientes = 0;
    TipoFila listar_medicos;
}UPA; //gurada dados da upa diretamente 

void InicializaFila(TipoFila *fila);
bool VerificaFilaVazia(TipoFila *fila);
void Enfileira(TipoFila *fila, TipoItem item);
void Desenfileira(TipoFila *fila, TipoItem *item);
void EnfileiraPrioridade(TipoFila *fila, TipoItem item);
void menu();
void Protocolo_Manchester(Triagem *Respostas_Triagem);
void Cadastra_Medico(DadosMedicos dados_medicos[]);
int Prioridade(Triagem Respostas_Triagem);
void Cadastra_Paciente(TipoFila *fila);
void Atualiza_Medico(TipoFila *fila, TipoItem *item, DadosMedicos medicolivre, Triagem respostas_triagem);
void Medico_livre (DadosMedicos dados_medicos[]);
void Cadastra_Paciente(TipoFila *fila, Triagem triagem);
void Atualiza_Medico(TipoFila *fila, TipoItem *item, DadosMedicos medicolivre, Triagem respostas_triagem);
void Calcula_Tempo_Medico_Livre(TipoFila *fila, DadosMedicos medico, Triagem triagem_respostas);
#endif
