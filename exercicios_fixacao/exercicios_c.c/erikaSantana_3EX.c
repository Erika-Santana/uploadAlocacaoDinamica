/*Exercício 3: Crie um programa que simule uma calculadora simples que pode realizar operações de soma, subtração, multiplicação e divisão.

·        Use uma estrutura typedef para representar uma operação, que inclui dois operandos e um operador.

·        Utilize alocação dinâmica para armazenar as operações e permitir que o usuário insira várias operações.*/


#include <stdio.h>

typedef struct{
    char operando[30];
    double operador1;
    double operador2;

}Operacao;

int main(int argc, char const *argv[])
{
    int **ptrJogador;
    int valor = 0;
    int *jogador = (Operacao *)malloc(1 *sizeof(Operacao));
    ptrJogador = &jogador;

    while (valor != 5)
    { 
        printf("--------------------------------\n");
        printf("        CALCULADORA             \n");
        printf("--------------------------------\n");
        printf("[1] MULTIPLICAÇÃO    -----------\n");
        printf("[2] ADIÇÃO           -----------\n");
        printf("[3] SUBTRAÇÃO        -----------\n");
        printf("[4] DIVISÃO          -----------\n");
        printf("--------------------------------\n");

        printf("DIGITE A CONTA A SER FEITA: ");
        scanf("%d", &valor);

        switch (valor)
        {
        case 1:
            
            break;
        
        default:
            break;
        }
        return 0;
    }
   
}
