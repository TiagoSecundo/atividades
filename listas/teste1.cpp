#include <iostream>
#include <cstring>
#include "teste.hpp"

using namespace std;


void menu()
{                       
    cout << " _________________________________________________________ " << endl;
    cout << "|                                                         | " << endl;
    cout << "|      Bem-vindo ao menu de cadastro de funcionarios      |" << endl;
    cout << "|                                                         | " << endl;
    cout << "|_________________________________________________________| " << endl
         << endl
         << endl;
    cout << " Insira a opção desejada: (1 ao 6) " << endl;
    cout << "1 Inclusão de um novo funcionário. " << endl;
    cout << "2 Inclusão de novos projetos para um funcionario. " << endl;
    cout << "3 Exclusão de projetos de um funcionario. " << endl;
    cout << "4 exclusão de um funcionario que nao trabalha em nenhum projeto. " << endl;
    cout << "5 Consulta de um funcionário. " << endl;
    cout << "6 Imprime contra-cheque. " << endl;
    system("cls");
}

void CriaListaVazia(TListaEncadeada *lista)// criando a lista encadeada vazia
{                                    
    lista->primeiro = new TCelula;   // apontando para o primeiro e dando um new celula
    lista->ultimo = lista->primeiro; // apontando para o ultimo = primeiro
    lista->primeiro->prox = NULL;    // apontando lista primeiro -> proximo igualando a NULL
}

int VerificaListaEncadeadaVazia(TListaEncadeada lista)
{                                            // Verifica se a lista encadeada está vazia
    return (lista.primeiro == lista.ultimo); // retornando se lista primeiro for igual a ultimo
}

int VerificaListaSequencialVazia(TListaSequencial lista)
{                                            // Verifica se a lista sequencial está vazia
    return (lista.primeiro == lista.ultimo); // retornando se lista primeiro for igual a ultimo
}

void CriaListaSequencialVazia(TListaSequencial *Lista)
{                                    // criando lista sequencial vazia
    Lista->primeiro = INICIO;        // apontando se lista primeiro for igual inicio no caso 0
    Lista->ultimo = Lista->primeiro; // apontando se lista ultimo for igual lista primeiro
}

void InsereEncadeada(TFuncionario f, TListaEncadeada *lista)
{                                        // Insere lista encadeada
    lista->ultimo->prox = new TCelula;   // apontando lista ultimo proximo para new TCelula
    lista->ultimo = lista->ultimo->prox; // apontando lista ultimo igual lista ultimo proximo
    lista->ultimo->item = f;             // apontando lista ultimo item igual f do TFuncionario
    lista->ultimo->prox = NULL;          // apontando lista ultimo proximo para NULL
}

void InsereSequencial(TProjeto x, TListaSequencial *Lista)
{                                // Insere lista sequencial
    if (Lista->ultimo == MAXTAM) // lista apontando para o ultimo == MAXTAM tamanho definido
        cout << " ERRO !!! TODOS PROJETOS JÁ ESTÃO CADASTRADOS ...";
    else
    {                                   // se não
        Lista->item[Lista->ultimo] = x; // lista item apontando para lista ultimo igual x
        Lista->ultimo++;                // lista ultimo ++ prosseguindo
    }
}

int BuscaEncadeada(TChave cod, TListaEncadeada lista, TApontador *p)
{                                    // Busca encadeada
    TApontador aux = lista.primeiro; // TApontador auxiliar igual lista chamando primeiro
    int achou = 0;                   // declaração de variaveis

    while ((!achou) && (aux->prox != NULL)) // while para auxiliar caso achar retonar
        if (aux->prox->item.codfuncionario == cod)
            achou = 1; // se for 1 verdadeiro achou
        else
            aux = aux->prox;
    *p = aux;
    return (achou); // retornando achou
}

int BuscaSequencial(int cod, TListaSequencial lista, int *p)
{                           // busca sequencial
    int i = lista.primeiro; // int i = lista para primeiro
    int achou = 0;          // declaração de variaveis

    while ((!achou) && (i < lista.ultimo)) // while para auxiliar caso achar retonar
        if (lista.item[i].codigo == cod)
            achou = 1; // se for 1 verdadeiro achou
        else
            i++;
    *p = i;
    return (achou); // retornando achou
}

void CadastraFuncionario(TListaEncadeada *lista)
{                   // cadastrando funcionario
    TFuncionario f; // TFuncionario declarado como f

    cout << "*******************************************\n"; // cadastrando funcionario
    cout << "*        CADASTRO DE FUNCIONÁRIO          *\n";
    cout << "*******************************************\n\n";
    cout << "CÓDIGO: "; // informar codigo
    cin >> f.codfuncionario;
    cin.ignore();
    fflush(stdin);
    cout << "NOME: "; // informar nome
    gets(f.nomefuncionario);
    cout << "ENDEREÇO: "; // informar endereço
    gets(f.endereco);
    cout << "DEPENDENTES: "; // informar dependentes
    cin >> f.dependentes;

    CriaListaSequencialVazia(&f.projetos); // para cadastro de projetos
    InsereEncadeada(f, lista);             // inserindo lista encadeada

    cout << "\nFUNCIONÁRIO FOI CADASTRADO COM EXITO !!!\n\n";
    // Sleep(2000);   // sleep de 2000 milisegundos
    system("cls"); // limpa tela
}

void CadastraProjeto(TListaEncadeada *lista)
{                 // cadastro de projetos
    TProjeto x;   // TProjeto declarado como X
    TApontador p; // TApontador declarado como P
    TChave cod;   // TChave declarado como COD
    int j, ret;   // declaração variaveis

    system("cls");

    cout << " ***************************************\n";
    cout << " *         CADASTRO DE PROJETOS        *\n";
    cout << " ***************************************\n\n";
    cout << "CODIGO DO FUNCIONARIO: ";
    cin >> cod;

    ret = BuscaEncadeada(cod, *lista, &p);

    if (ret == 1)
    {
        cout << "\n\nDIGITE O CODIGO PARA CRIAR O PROJETO: ";
        cin >> x.codigo;
        if (BuscaSequencial(x.codigo, p->prox->item.projetos, &j))
        {
            cout << "\nO CODIGO SOLICITADO JÁ É EXISTENTE\n\n";
            system("pause");
            system("cls");
        }
        else
        { // se encontrou
            cout << "\nDIGITE O NOME DO PROJETO: ";
            cin >> x.nome;
            cout << "\nDIGITE A QUANTIDADE DE HORAS TRABALHADAS: ";
            cin >> x.horas;
            InsereSequencial(x, &(p->prox->item.projetos));
            cout << "\nCODIGO FOI CADASTRADO COM EXITO !!!\n\n";
            system("pause");
            system("cls");
        }
    }
    else
    { // se não encontrou
        cout << "\nERRO !!! O CODIGO QUE VC DIGITOU AINDA NÃO FOI CADASTRADO !!!\n\n";
        system("pause");
        system("cls");
    }
}

void ApagaFuncionario(TApontador x, TListaEncadeada *lista, TFuncionario *f)
{ // apaga funcionario
    TApontador q;

    if ((VerificaListaEncadeadaVazia(*lista)) || (x == NULL) || (x->prox == NULL))
    {
        cout << "ERRO !!! LISTA ESTÁ VAZIA"; // verificando a lista encadeada se está vazia
    }
    else
    {
        q = x->prox;
        *f = q->item;
        x->prox = q->prox;
        if (x->prox == NULL)
        {
            lista->ultimo = x;
        }
        delete q;
    }
}

void ExcluirFuncionario(TListaEncadeada *lista)
{ // excluir funcionario
    TFuncionario f;
    TApontador x = lista->primeiro;
    int cont = 0;

    while (x->prox != NULL)
    {
        // if ( Trabalho: Verificar se funcionário não possui projetos)
        ApagaFuncionario(x, lista, &f); // função apaga funcionario
        cont++;
    }

    system("cls"); // limpa tela

    cout << "*******************************************\n";
    cout << "*        EXCLUSÃO DE FUNCIONÁRIOS         *\n";
    cout << "*******************************************\n\n";
    cout << "\n"
         << cont << " FUNCIONARIO(S) EXCLUÍDO(S) COM SUCESSO!\n\n";
    system("pause");
    system("cls");
}

void ListaFuncionario(TListaEncadeada *lista)
{ // lista de funcionario função
    TApontador aux = lista->primeiro->prox;

    system("cls");

    cout << "*******************************************\n";
    cout << "*        LISTAGEM DE FUNCIONÁRIOS         *\n";
    cout << "*******************************************\n\n";

    while (aux)
    { // fazendo um while para auxiliar
        cout << "\nCODIGO: " << aux->item.codfuncionario;
        cout << "\nNOME: " << aux->item.nomefuncionario;
        cout << "\nENDEREÇO: " << aux->item.endereco;
        cout << "\nDEPENDENTES: " << aux->item.dependentes << endl
             << endl;
        aux = aux->prox;
    }
    system("pause");
    system("cls");
}

void ConsultaFuncionario(TListaEncadeada lista) //ja fiz
{ // consultando o funcionario
    TChave cod;
    TApontador p;

    system("cls");

    int ret;

    cout << "*******************************************\n";
    cout << "*        CONSULTA DE FUNCIONÁRIO          *\n";
    cout << "*******************************************\n\n";
    cout << "INFORME O CODIGO DO FUNCIONARIO: ";
    cin >> cod;

    ret = BuscaEncadeada(cod, lista, &p); // ret recebendo a função busca encadeada

    if (ret == 1)
    {
        cout << "\nCODIGO: " << p->prox->item.codfuncionario;
        cout << "\nNOME: " << p->prox->item.nomefuncionario;
        cout << "\nENDEREÇO: " << p->prox->item.endereco;
        cout << "\nDEPENDENTES: " << p->prox->item.dependentes << endl
             << endl;
        cout << "\nO FUNCIONARIO SOLICITADO POSSUI O(S) SEGUINTE(S) PROJETO(S): \n";

        ImprimeProjetos(p->prox->item.projetos); // função sendo chamada para imprimir os projetos

        system("pause");
        system("cls");
        cout << endl;
    }
    else
    {
        cout << "\nERRO !!! O CODIGO QUE VC DIGITOU AINDA NÃO FOI CADASTRADO !!!\n\n";
        system("pause");
        system("cls");
    }
}

void ImprimeProjetos(TListaSequencial Lista)
{ // imprime projetos
    int i;
    for (i = 0; i < Lista.ultimo; i++)
    {
        cout << "\n CODIGO DO PROJETO:        " << Lista.item[i].codigo;        // para digitar codigo
        cout << "\n NOME DO PROJETO:          " << Lista.item[i].nome;          // para digitar nome
        cout << "\n HORAS TRABALHADAS:        " << Lista.item[i].horas << "\n"; // para digitar horas trabalhadas
    }
}

void ExcluirFuncSemProjetos(TListaEncadeada *lista)
{                      // exclui um funcionario
    TApontador p, ant; // Tapontador sendo declarado como P e ANT
    TChave cod;        // Tchave sendo declarado como COD
    int ret;           // Declaração de variaveis

    system("cls");

    cout << "*******************************************\n";
    cout << "*   EXCLUSÃO DE FUNCIONÁRIO  S/ PROJETO   *\n";
    cout << "*******************************************\n\n";
    cout << "DIGITE O CODIGO DO FUNCIONARIO: ";
    cin >> cod;
    ret = BuscaEncadeada(cod, *lista, &p);
    if (ret == 1)
    {
        if (p->prox->item.projetos.primeiro == p->prox->item.projetos.ultimo)
        { // Se a lista estiver vazia
            ant = p;
            p = p->prox;
            ant->prox = p->prox;
            delete p; // Exclui o funcionario
            cout << "\nFUNCIONARIO EXCLUIDO COM SUCESSO !!!\n\n";
            system("pause");
            system("cls");
        }
        else
        { // Se a lista não estiver vazia
            cout << "\nFUNCIONARIO NÃO PODE SER EXCLUIDO POIS ELE JÁ POSSUI PROJETOS !!!\n\n";
            system("pause");
            system("cls");
        }
    }
    else
    { // Se não encontrou
        cout << "\nERRO !!! O CODIGO QUE VC DIGITOU AINDA NÃO FOI CADASTRADO !!!\n\n";
        system("pause");
        system("cls");
    }
}

void ExcluirProjeto(TListaEncadeada *lista)
{                 // Excluir projetos
    TChave cod;   // Tchave sendo nomeado como COD
    TApontador p; // Tapontador sendo nomeado como P
    TProjeto pj;
    int codExcluido, y, ret; // Variaveis sendo declaradas

    system("cls");

    cout << "*******************************************\n";
    cout << "*        EXCLUSÃO DE PROJETO              *\n";
    cout << "*******************************************\n\n";
    cout << "DIGITE O CODIGO DO FUNCIONARIO: ";
    cin >> cod;
    ret = BuscaEncadeada(cod, *lista, &p); // Busca encadeada
    if (ret == 1)
    {
        p = p->prox;
        cout << "\nDIGITE O CODIGO DO PROJETO PARA SER EXCLUIDO: ";
        cin >> codExcluido;
        if (BuscaSequencial(codExcluido, p->item.projetos, &y))
        {
            Remover(y, &(p->item.projetos), &pj); // Busca sequencial

            cout << "\nPROJETO EXCLUIDO COM SUCESSO\n\n"; // projeto excluido com sucesso
            system("pause");
            system("cls");
        }
        else
        { // Projeto não existe
            cout << "\nCODIGO DIGITADO NÃO EXISTE\n\n";
            system("pause");
            system("cls");
        }
    }
    else
    { // Se não encontrou
        cout << "\nERRO !!! O CODIGO QUE VC DIGITOU AINDA NÃO FOI CADASTRADO !!!\n\n";
        system("pause");
        system("cls");
    }
}

void ImprimeContraCheque(TListaEncadeada *lista)
{
    TApontador Aux = lista->primeiro->prox;
    int TotalHorasTrabalhadas = 0; // declaração variaveis
    float SalarioBruto, SalarioLiquido, INSS, Imposto;

    system("cls");

    cout << "*******************************************\n";
    cout << "*         IMPRIMIR CONTRA-CHEQUE          *\n";
    cout << "*******************************************\n\n";

    while (Aux)
    {
        cout << "\nCODIGO: " << Aux->item.codfuncionario;
        cout << "\nNOME: " << Aux->item.nomefuncionario;

        for (int i = 0; i < Aux->item.projetos.ultimo; i++)
        { // mostra contra cheque

            TotalHorasTrabalhadas = TotalHorasTrabalhadas + Aux->item.projetos.item[i].horas;
        }
        // declaração das contas para o resultado de ambas
        SalarioBruto = (TotalHorasTrabalhadas * 45) + (35 * Aux->item.dependentes);
        INSS = SalarioBruto * 0.085;
        Imposto = SalarioBruto * 0.15;
        SalarioLiquido = SalarioBruto - (INSS + Imposto);

        cout << "\nTOTAL DE HORAS TRABALHADAS SEMANALMENTE: " << TotalHorasTrabalhadas;                      // imprime total de horas trabalhadas
        cout << "\nSALARIO BRUTO SENDO DESCONTADO 8.5 PORCENTO DO INSS: " << SalarioBruto << ",00";          // imprime salario bruto
        cout << "\nINSS: " << INSS;                                                                          // imprime INSS
        cout << "\nIMPOSTO DE RENDA SENDO DESCONTADO 15 PORCENTO DE RENDA SOBRE SALARIO BRUTO: " << Imposto; // imprime imposto de renda
        cout << "\nSALARIO LIQUIDO: " << SalarioLiquido << endl
             << endl; // imprime salario liquido

        // reseta os salarios para entrada de novos valores
        SalarioBruto = 0;
        SalarioLiquido = 0;
        INSS = 0;
        TotalHorasTrabalhadas = 0;
        Imposto = 0;
        Aux = Aux->prox;
    }
    system("pause");
    system("cls");
}

void Remover(int p, TListaSequencial *lista, TProjeto *pj)
{
    if (VerificaListaSequencialVazia(*lista))
    {
        cout << "ERRO !!! LISTA VAZIA...";
    }
    *pj = lista->item[p];
    
    lista->ultimo--;
    for (int i = p; i < lista->ultimo; i++)
    {
        lista->item[i] = lista->item[i + 1];
    }
}