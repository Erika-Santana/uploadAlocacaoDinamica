#include <stdio.h>
#include <stdlib.h>

int main() {

    int *intArrayMalloc, *intArrayCalloc;

    int newSize;

    // Aloque memória para um array de 5 inteiros usando malloc

    intArrayMalloc = (int *)malloc(5 * sizeof(int));

    if (intArrayMalloc == NULL) {

        printf("Falha na alocação de memória com malloc!\n");

        return 1;

    }

    // Aloque memória para um array de 5 inteiros usando calloc

    intArrayCalloc = (int *)calloc(5, sizeof(int));

    if (intArrayCalloc == NULL) {

        printf("Falha na alocação de memória com calloc!\n");

        return 1;

    }

    printf("Array alocado com malloc:\n");

    // Preencha e imprima o array alocado com malloc

    for (int i = 0; i < 5; i++) {

        intArrayMalloc[i] = i * 10;

        printf("intArrayMalloc[%d] = %d\n", i, intArrayMalloc[i]);

    }

    printf("Array alocado com calloc:\n");

    // Preencha e imprima o array alocado com calloc

    for (int i = 0; i < 5; i++) {

        intArrayCalloc[i] = i * 20;

        printf("intArrayCalloc[%d] = %d\n", i, intArrayCalloc[i]);

    }

    // Redimensione ambos os arrays para um tamanho maior usando realloc

    newSize = 10;

    int *newIntArrayMalloc = (int *)realloc(intArrayMalloc, newSize * sizeof(int));

    int *newIntArrayCalloc = (int *)realloc(intArrayCalloc, newSize * sizeof(int));

    if (newIntArrayMalloc == NULL || newIntArrayCalloc == NULL) {

        printf("Falha na realocação de memória!\n");

        free(intArrayMalloc); // Libere a memória original alocada com malloc, pois realloc falhou

        free(intArrayCalloc); // Libere a memória original alocada com calloc, pois realloc falhou

        return 1;

    } else {

        intArrayMalloc = newIntArrayMalloc;

        intArrayCalloc = newIntArrayCalloc;

    }

    printf("Arrays redimensionados para tamanho %d com realloc:\n", newSize);

    // Preencha e imprima os arrays redimensionados

    for (int i = 5; i < newSize; i++) {

        intArrayMalloc[i] = i * 10;

        intArrayCalloc[i] = i * 20;

        printf("intArrayMalloc[%d] = %d\n", i, intArrayMalloc[i]);

        printf("intArrayCalloc[%d] = %d\n", i, intArrayCalloc[i]);

    }

    // Libere a memória alocada dinamicamente

    free(intArrayMalloc);

    free(intArrayCalloc);

    return 0;

}