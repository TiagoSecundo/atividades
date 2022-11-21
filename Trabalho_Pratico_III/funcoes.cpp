#include <iostream>
#include <windows.h>
#include <time.h>
#include <ctime>
#include "cabecario.hpp"

#define MAXTAM 5

using namespace std;

void InicializaFila(TipoFila *fila) // Usadfo para iniciar a fila
{
    fila->inicio = NULL;
    fila->fim = NULL;
    fila->tamanho = 0;
}

bool VerificaFilaVazia(TipoFila *fila) // verifica se a fila coi criada com sucesso
{
    return (fila->inicio == NULL);
}

void Enfileira(TipoFila *fila, TipoItem item) // Pega o item e enfilera na fila
{
    Apontador novo = new TipoElemento;
    novo->item = item;
    novo->prox = NULL;

    if (VerificaFilaVazia(fila))
    {
        fila->inicio = novo;
    }
    else
    {
        fila->fim->prox = novo;
    }

    fila->fim = novo;
    fila->tamanho++;
}

void Desenfileira(TipoFila *fila, TipoItem *item) // Retira o item da fila
{
    if (VerificaFilaVazia(fila))
    {
        cout << "Fila vazia!" << endl;
        return;
    }
    Apontador aux = fila->inicio;
    *item = aux->item;
    fila->inicio = aux->prox;
    delete aux;
    fila->tamanho--;
}

void EnfileiraPrioridade(TipoFila *fila, TipoItem item) // verifica a prioridade od item e coloca na fila em oprimeiro elemento
{
    Apontador novo = new TipoElemento;
    novo->item = item;
    novo->prox = NULL;

    Apontador aux = fila->inicio;

    if (VerificaFilaVazia(fila))
    {
        fila->inicio = novo;
    }
    else
    {
        if (!aux->item.prioridade)
        {
            novo->prox = aux;
            fila->inicio = novo;
        }
        else
        {
            while (aux->prox != NULL && aux->prox->item.prioridade)
            {
                aux = aux->prox;
            }

            novo->prox = aux->prox;
            aux->prox = novo;
        }
    }

    fila->tamanho++;
}

void menu() // Mostra as opções de funcionalidade do programa
{
    cout << " ______________________________________________" << endl;
    cout << "|                                              |" << endl;
    cout << "|                                              |" << endl;
    cout << "|          Bem Vindo a Unidade de Pronto       |" << endl;
    cout << "|               Atendimento (UPA)              |" << endl;
    cout << "|                                              |" << endl;
    cout << "|______________________________________________|" << endl
         << endl
         << endl;
    cout << "Insira numero da opcao desejada: (1 a 4)" << endl;
    cout << "1. Triagem/Cadastrar paciente. " << endl;
    cout << "2. Listar todos os medicos. " << endl;
    cout << "3. Listar medicos disponiveis. " << endl;
    cout << "4. Atualizar medico." << endl;
    cout << "5. Quantidade de atendimentos no dia." << endl;
}

void Protocolo_Manchester(Triagem *Respostas_Triagem) // Recebe as respostas da triagem
{
    int op = 1;
    cout << " _______________________________________" << endl;
    cout << "|                                       |" << endl;
    cout << "|                                       |" << endl;
    cout << "|        Protocolo Atendimento          |" << endl;
    cout << "|               Primario                |" << endl;
    cout << "|                                       |" << endl;
    cout << "|_______________________________________|" << endl
         << endl
         << endl;
    cout << "Paciente classificado de acordo com os niveis de urgencia a seguir: " << endl
         << endl
         << endl;
    cout << "EMERGENCIA ------------ atendimento imediato. (vermelho)" << endl;
    cout << "MUITO URGENTE --------- atendimento em ate 10 min. (laranja)" << endl;
    cout << "URGENTE --------------- atendimento em ate 60 min. (amarelo) " << endl;
    cout << "POUCO URGENTE --------- atendimento em ate 120 min. (verde) " << endl;
    cout << "NAO URGENTE ------------ atendimento em ate 240 min. (azul)" << endl;
    system("pause");
    system("cls");

    cout << "Insira (S) caso o paciente estiver o sintomas a seguir, ou (N) caso nao: " << endl
         << endl;
    cout << "1. Comprometimento da via aeria (vermelho)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[0];
    if (Respostas_Triagem->salva_respostas_triagem[0] == 's')
    { /* Usado para quando identificar prioridade vermelha e se identificado, parar o programa e ja classifcar o paciente para atendimento*/

        return;
    }

    cout << "2. Respiracao ineficaz: (vermelho)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[1];
    if (Respostas_Triagem->salva_respostas_triagem[1] == 's')
    {

        return;
    }

    cout << "3. Choque: (vermelho)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[2];
    if (Respostas_Triagem->salva_respostas_triagem[2] == 's')
    {

        return;
    }
    cout << "4. Nao responde a estimulos: (vermelho)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[3];
    if (Respostas_Triagem->salva_respostas_triagem[3] == 's')
    {

        return;
    }
    cout << "5. Em convulsao: (vermelho)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[4];
    if (Respostas_Triagem->salva_respostas_triagem[4] == 's')
    {

        return;
    }
    cout << "6. Dor severa: (laranja)" << endl; //guarda as respostas dos sintomas dos pacientes 
    cin >> Respostas_Triagem->salva_respostas_triagem[5];
    cout << "7. Grande hemorragia incontrolavel: (laranja)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[6];
    cout << "8. Alteracao no estado de consciencia: (laranja)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[7];
    cout << "9. Temperatura igual ou maior que a 39 graus: (laranja)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[8];
    cout << "10. trauma craniano severo: (laranja)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[9];
    cout << "11. Dor moderada: (amarelo)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[10];
    cout << "12. Pequena hemorragia incontrolavel: (amarelo)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[11];
    cout << "13. Vomito persistente: (amarelo)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[12];
    cout << "14. Temperatura entre 38 garus e 39 graus: (amarelo)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[13];
    cout << "15. Idoso ou gravida: (amarelo)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[14];
    cout << "16. Dor leve: (azul)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[15];
    cout << "17. Nauseas: (azul)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[16];
    cout << "18. Temperatura entre 37 graus e 38 graus: (azul)" << endl;
    cin >> Respostas_Triagem->salva_respostas_triagem[17];
    system("cls");
}

void Cadastra_Medico(DadosMedicos dados_medicos[]) // Vetor salvando dados dos medicos
{
    dados_medicos[0].nome = "Nome: Eduardo Augusto";
    dados_medicos[0].crm = "CRM: MG 15.1000";
    dados_medicos[0].especialidade = "Especialidade: Clinico Geral ";
    dados_medicos[1].nome = "Nome: Lucas Rocha";
    dados_medicos[1].crm = "CRM: MG 14.159";
    dados_medicos[1].especialidade = "Especialidade: Cardiologista ";
    dados_medicos[2].nome = "Nome: Igor Maia ";
    dados_medicos[2].crm = "CRM: MG 13.113";
    dados_medicos[2].especialidade = "Especialidade: Clinico Geral ";
    dados_medicos[3].nome = "Nome: Thales Moura";
    dados_medicos[3].crm = "CRM: MG 22.212";
    dados_medicos[3].especialidade = "Especialidade: Urologista";
    dados_medicos[4].nome = "Nome: Henrique Sabino";
    dados_medicos[4].crm = "CRM: MG 19.350";
    dados_medicos[4].especialidade = "Especialidade: Clinico geral";

    for (int i = 0; i < MAXTAM; i++) // retorna todos os dados dos medicos 
    {
        cout << dados_medicos[i].nome << endl;
        cout << dados_medicos[i].crm << endl;
        cout << dados_medicos[i].especialidade << endl;
        cout << dados_medicos[i].paciente_atendido.nome << endl
             << endl;
    }
}

void Medico_livre(DadosMedicos dados_medicos[])
{
    for (int i = 0; i < MAXTAM; i++) 
    {
        cout << dados_medicos[i].nome << endl;
        if (dados_medicos[i].medico_livre) //verifica a disponibilidade do medico 
        {
            cout << "Medico livre. " << endl
                 << endl;
        }
        else
        {
            cout << "Medico em consulta. " << endl
                 << endl;
        }
    }
}

int Prioridade(Triagem Respostas_Triagem)
{
    int tamanho = sizeof(Respostas_Triagem.salva_respostas_triagem) / sizeof(Respostas_Triagem.salva_respostas_triagem[0]); /*pega o tamanho todo do vetor ocupa na memoria,
    dividindo assim pelo tamanho de um dos componentes ocupam na memoria */
    for (int i = 0; i < tamanho; i++)
    {
        if (Respostas_Triagem.salva_respostas_triagem[i] == 's' || Respostas_Triagem.salva_respostas_triagem[i] == 'S')
        { // classifca prioridade de acordo com sintomas
            if (i < 5)
            {
                return 0;
            }
            if (i < 10)
            {
                return 1;
            }
            if (i < 15)
            {
                return 2;
            }
            if (i < 18)
            {
                return 3;
            }
        }
    }
}

void Cadastra_Paciente(TipoFila *fila, Triagem triagem) // salvar dados dos pacientes.
{
    TipoItem paciente;
    cout << "Insira nome: " << endl;
    cin >> paciente.nome;
    cout << "Insira idade: " << endl;
    cin >> paciente.idade;
    cout << "Insira sexo: (m/f)" << endl;
    cin >> paciente.sexo;
    cin.ignore();
    cout << "Insira endereco: " << endl;
    cin.getline(paciente.endereco, 50);
    paciente.triagem = triagem;
    paciente.prioridade = Prioridade(paciente.triagem); //verifica a prioridade do paciente 
    EnfileiraPrioridade(fila, paciente); //coloca o paciente na fila 
}

void Atualiza_Medico(TipoFila *fila, DadosMedicos medicolivre[])
{ // atualiza a disponibilidade do medico e calucla o tempo da consulta.
    Apontador aux, cont;
    int recebe_tamanho_fila = fila->tamanho;

    for (int i = 0; i < MAXTAM; i++)
    {
        if (VerificaFilaVazia(fila))
        {
            break;
        }
        if (medicolivre[i].medico_livre == true)
        {
            Desenfileira(fila, &medicolivre[i].paciente_atendido); // Passar o pacinete para o medico livre.
            cont++;                                                // contador para contar o numero de atendimentos no dia.
            medicolivre[i].medico_livre = false;                   // Passando o medico como ocupado.
            medicolivre[i].tempo_atendimento = clock();            // guarda tempo inicial da consulta
        }
    }
    if (fila->tamanho == recebe_tamanho_fila)
    {
        cout << "Consulta em andamento " << endl;
    }
    else
    {
        cout << "Pacientes encaminhados " << endl;
        cout << "quantidade de pacientes em espera: " << fila->tamanho << endl; // retorna quantidade de paciente esperando atendimento
    }
}

void Calcula_Tempo_Medico_Livre(TipoFila *fila, DadosMedicos medico, Triagem triagem_respostas)
{
    if (medico.paciente_atendido.prioridade == 0) //verifica qual é a prioridade do paciente 
    {
        if ((((clock() - medico.tempo_atendimento) / CLOCKS_PER_SEC) / 60) >= 60) //calcula o tempo maximo da consulta 
        {
            medico.medico_livre = true;
        }
    }
    else if (medico.paciente_atendido.prioridade == 1)
    {
        if ((((clock() - medico.tempo_atendimento) / CLOCKS_PER_SEC) / 60) >= 25)
        {
            medico.medico_livre = true;
        }
    }
    else if (medico.paciente_atendido.prioridade == 0)
    {
        if ((((clock() - medico.tempo_atendimento) / CLOCKS_PER_SEC) / 60) >= 20)
        {
            medico.medico_livre = true;
        }
    }
    else if (medico.paciente_atendido.prioridade == 0)
    {
        if ((((clock() - medico.tempo_atendimento) / CLOCKS_PER_SEC) / 60) >= 12)
        {
            medico.medico_livre = true;
        }
    }
    else if (medico.paciente_atendido.prioridade == 0)
    {
        if ((((clock() - medico.tempo_atendimento) / CLOCKS_PER_SEC) / 60) >= 8)
        {
            medico.medico_livre = true;
        }
    }
}
