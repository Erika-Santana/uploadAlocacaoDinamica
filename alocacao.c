#include <stdio.h>
#include <stdlib.h>
int main() {

int *intArray; // Ponteiro para um array de inteiros
// Alocar memória para um array de 5 inteiros
intArray = (int *)malloc(5 * sizeof(int)); // aqui ele tá alocando a memória para um array de 5 inteiros

if (intArray == NULL) {
printf("Falha na alocação de memória!\n");
return 1;
}
// Preencher o array com alguns valores
for (int i = 0; i < 5; i++) {
intArray[i] = i * 10;
}
// Imprimir os valores do array
for (int i = 0; i < 5; i++) {
printf("intArray[%d] = %d\n", i, intArray[i]);
}
// Liberar a memória alocada dinamicamente
free(intArray);
return 0;
}