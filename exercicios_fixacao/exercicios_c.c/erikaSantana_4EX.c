/*
Exercício 4: Crie um programa para gerenciar uma lista de tarefas.

·        Cada tarefa deve ter um nome (uma string) e um status (concluída ou não). Use alocação dinâmica para armazenar as tarefas.

·        O programa deve permitir adicionar novas tarefas, marcar tarefas como concluídas e listar as tarefas existentes com seus nomes e estados.*/
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char tarefa[30];
    int status;
}Tarefas;

int main(int argc, char const *argv[])
{
    int opcao;
    char opcaoTarefa[30];

    Tarefas *ptrTarefas = (Tarefas *)malloc(1 * sizeof(Tarefas));
    while (opcao != 4)
    {
        printf("--------------------------------");
        printf("        DIGITE A OPCAO          ");
        printf("--------------------------------");
        printf("[1] ADICIONAR TAREFA -----------");
        printf("[2] CONCLUIR TAREFA  -----------");
        printf("[3] MOSTRAR TAREFAS  -----------");
        printf("[4] SAIR PROGRAMA    -----------");
        printf("--------------------------------");

                
        switch (opcao)
        {
            case 1:
                adicionarTarefa();
                break;
            case 2:
                printf("DIGITE A TAREFA -----------");
                scanf("%s", opcaoTarefa);
                concluirTarefa();
                break;

            
            default:
                break;
        }
    }
    return 0;
    
}

void adicionarTarefa(){
    Tarefas *ptrTarefas = (Tarefas *)malloc(1 * sizeof(Tarefas));
    printf("DIGITE O NOME DA TAREFA: ");
    scanf("%s", ptrTarefas->tarefa );
}

void concluirTarefa(Tarefas *statusTarefa, char tarefa){
    if (statusTarefa->tarefa == tarefa )
    {
        statusTarefa->status == 1;
    }
    printf("TAREFA CONCLUÍDA!");
}