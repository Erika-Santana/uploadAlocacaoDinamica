#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que permita ao usuário informar o número de linhas e colunas de uma matriz bidimensional. Em seguida, aloque dinamicamente memória para a matriz e preencha-a com números crescentes a partir de 1. Por fim, imprima a matriz e libere a memória alocada dinamicamente.*/

int main(int argc, char const *argv[])
{
    int **matriz;
    int coluna, linha;
    printf("Digite a coluna e linhas da matriz: \n");
    scanf("%d %d", coluna, linha);

    // faz a alocaçao da memoria com cada uma da linhas e colunas

    matriz = (int **)malloc(linha * sizeof(int *));
    //Criação das linhas
    //Aqui no for é alocado os espaços das colunas para cada
    for (int i = 0; i < linha; i++) { 

    matriz[i] = (int *)malloc(coluna * sizeof(int));

   }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            matriz[i][j] = i + 1;
        }
        
    }
    

    printf("Valores da matriz alocada dinamicamente:\n");

    for (int i = 0; i < linha; i++) {

        for (int j = 0; j < coluna; j++) {

            printf("%d ", matriz[i][j]);

        }

        printf("\n");

    }

    for (int i = 0; i < linha; i++) {

        free(matriz[i]);

    }

    free(matriz);

    return 0;
}
