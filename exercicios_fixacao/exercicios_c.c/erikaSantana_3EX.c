    /*Exercício 3: Crie um programa que simule uma calculadora simples que pode realizar operações de soma, subtração, multiplicação e divisão.

    ·        Use uma estrutura typedef para representar uma operação, que inclui dois operandos e um operador.

    ·        Utilize alocação dinâmica para armazenar as operações e permitir que o usuário insira várias operações.*/


    #include <stdio.h>
    #include <stdlib.h>

    typedef struct{
        char operando[30];
        double operador1;
        double operador2;

    }Operacao;

    int main(int argc, char const *argv[])
    {
    
        int valor = 0, opcao = 0;
        double resultado = 0.0;
        printf("Digite quantas operações deseja fazer: ");
        scanf("%d", &opcao);
        Operacao *jogador = (Operacao *)malloc(opcao *sizeof(Operacao));
        

    for (int i = 0; i < opcao; i++)
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

            printf("DIGITE O VALOR DO PRIMEIRO: \n");
                scanf(" %lf", &jogador[i].operador1);
                printf("DIGITE O VALOR DO SEGUNDO: \n");
                scanf(" %lf", &jogador[i].operador2);

            switch (valor)
            {
                
            case 1:
                resultado = (jogador[i].operador1) * (jogador[i].operador2);

                printf("O resultado é: %.2lf\n", resultado);           
                break;
            case 2:
                resultado = (jogador[i].operador1) + (jogador[i].operador2);
                printf("O resultado é: %.2lf\n", resultado);           
                break;
            case 3:
                resultado = (jogador[i].operador1) - (jogador[i].operador2);
                printf("O resultado é: %.2lf\n", resultado);     

            case 4:

            if (jogador[i].operador2 == 0)
            {
                printf("VALOR INVÁLIDO!");
            }else{
                resultado = (jogador[i].operador1) / (jogador[i].operador2);
                printf("O resultado é: %.2lf\n", resultado);    
            }
    
            break;
            
            default:
                break;
            }
            return 0;
        }

    }


