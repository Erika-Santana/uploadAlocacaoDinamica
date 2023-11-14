/*
Exercício 4: Crie um programa para gerenciar uma lista de tarefas.

·        Cada tarefa deve ter um nome (uma string) e um status (concluída ou não). Use alocação dinâmica para armazenar as tarefas.

·        O programa deve permitir adicionar novas tarefas, marcar tarefas como concluídas e listar as tarefas existentes com seus nomes e estados.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char tarefa[30];
    int status;
}Tarefas;

void limparTerminal();
void aguardarEnter();
void concluirTarefa(Tarefas **statusTarefa, char tarefa[], int *ptrQndTarefa);
void adicionarTarefa(Tarefas **ptrPonteiroTarefas, int *ptrQndTarefa);
void mostrarTarefas( Tarefas **ptrPonteiroTarefas, int *ptrQndTarefa);

int main()
{
    int opcao;
    char opcaoTarefa[30];
    int qntdTarefa = 0;
    int *ptrQndTarefa = &qntdTarefa;

    Tarefas *ptrTarefas = NULL;
    Tarefas **ptrPonteiroTarefas = &ptrTarefas;

    while (opcao != 4)
    {
        limparTerminal();
        printf("--------------------------------\n");
        printf("        DIGITE A OPCAO          \n");
        printf("--------------------------------\n");
        printf("[1] ADICIONAR TAREFA -----------\n");
        printf("[2] CONCLUIR TAREFA  -----------\n");
        printf("[3] MOSTRAR TAREFAS  -----------\n");
        printf("[4] SAIR PROGRAMA    -----------\n");
        printf("--------------------------------\n");
        scanf("%d", &opcao);
        
                
        switch (opcao)
        {
            case 1:
                adicionarTarefa(ptrPonteiroTarefas, ptrQndTarefa);
                aguardarEnter();
                break;

            case 2:
                printf("DIGITE A TAREFA: \n");
                scanf("%s", opcaoTarefa);
                concluirTarefa(ptrPonteiroTarefas, opcaoTarefa, ptrQndTarefa);
                aguardarEnter();
                break;

            case 3:
                printf("TAREFAS:   \n");
                mostrarTarefas(ptrPonteiroTarefas, ptrQndTarefa);
                aguardarEnter();
                break;

            case 4:
                printf("----- FECHANDO PROGRAMA    -----------\n");
                break;
            
            default:
                break;
        }
    }

    free(ptrTarefas);

    return 0;
    
}


void adicionarTarefa(Tarefas **ptrPonteiroTarefas, int *ptrQndTarefa){
  
    if (*ptrPonteiroTarefas == NULL)
    { 
        //A partir do ponteiro, ele define o tamanho da estrutura
        //Quando é colocado apenas 1 ponteiro, já é o endereçamento do verdadeiro ponteiro
        *ptrPonteiroTarefas = (Tarefas *)malloc(1 * sizeof(Tarefas));
        *ptrQndTarefa += 1;
        printf("DIGITE O NOME DA TAREFA: ");
        scanf(" %[^\n]", (*ptrPonteiroTarefas)[0].tarefa );
        //atribuição do valor da tarefa no ponteiro
    }else{    
        //Pega o total de tarefas criadas 
        
        *ptrPonteiroTarefas = realloc(*ptrPonteiroTarefas, (*ptrQndTarefa + 1) * sizeof(Tarefas ));
        *ptrQndTarefa += 1;
         printf("DIGITE O NOME DA TAREFA: ");
         scanf(" %[^\n]", (*ptrPonteiroTarefas)[(*ptrQndTarefa) - 1].tarefa );
    }
}

void concluirTarefa(Tarefas **statusTarefa, char tarefa[], int *ptrQndTarefa){
    for (int i = 0; i < (*ptrQndTarefa); i++)
    {
        if (strcmp((*statusTarefa)[i].tarefa, tarefa) == 0 )
        {
            (*statusTarefa)[i].status = 1;
            printf("TAREFA CONCLUÍDA!\n");
        }
       
    }

}

void mostrarTarefas( Tarefas **ptrPonteiroTarefas, int *ptrQndTarefa){
    int tarefa;
    char conclusao[30];
   for (int i = 0; i < (*ptrQndTarefa); i++)
   {    tarefa =  (*ptrPonteiroTarefas)[i].status;
        if (tarefa == 0)
        {
           strcpy(conclusao, " NÃO CONCLUIDA!\n");
        }else{
             strcpy(conclusao, " CONCLUIDA!\n");
        }
        
        printf("| [%d] %s |STATUS: %s|\n", i, (*ptrPonteiroTarefas)[i].tarefa, conclusao);
   }
   
}



void limparTerminal(void) {
    #ifdef _WIN32
        system("cls");
    #else 
        system("clear");
    #endif
}

void aguardarEnter() {
    printf("\n\nPressione enter para continuar: ");
    getchar();
    getchar();
}