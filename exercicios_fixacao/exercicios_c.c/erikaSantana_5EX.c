/*Exercício 5: 
·Crie um jogo de "Adivinhe a Palavra" em que o jogador tenta adivinhar uma palavra oculta.
·A palavra oculta é escolhida aleatoriamente e o jogador deve adivinhar as letras da palavra uma por uma.
·O jogador tem um número limitado de tentativas para adivinhar a palavra.
·Use alocação dinâmica para armazenar a palavra oculta e as letras adivinhadas.
·O programa deve exibir a palavra oculta com letras em branco e revelar letras corretas à medida que o jogador adivinha.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(int argc, char const *argv[])
{
    char *arrayPalavras[10];
    char palavras[20];

    char palavraAleatoria[20];
    
    printf("Digite as palavras: \n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%s", palavras);
        arrayPalavras[i] = strdup(palavras);
    }

    srand(time(NULL));

    char palavraAleatoria[] = arrayPalavras[rand() % 2];
    printf("%s", palavraAleatoria);
    return 0;
}


/*Exercício 5: Crie um jogo de "Adivinhe a Palavra" em que o jogador tenta adivinhar uma palavra oculta.

·        A palavra oculta é escolhida aleatoriamente e o jogador deve adivinhar as letras da palavra uma por uma.

·        O jogador tem um número limitado de tentativas para adivinhar a palavra.

·        Use alocação dinâmica para armazenar a palavra oculta e as letras adivinhadas.

·        O programa deve exibir a palavra oculta com letras em branco e revelar letras corretas à medida que o jogador adivinha.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    return 0;
}
