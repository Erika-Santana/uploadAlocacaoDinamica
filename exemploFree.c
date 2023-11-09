#include <stdio.h>
#include <stdlib.h>
int main() {
int *intArray;
intArray = (int *)malloc(5 * sizeof(int));
if (intArray == NULL) {
printf("Falha na alocação de memória!\n");
return 1;
}
// ... código para trabalhar com o array
// Liberar a memória alocada dinamicamente quando não for mais necessária
free(intArray);
// Agora, intArray não aponta mais para a memória alocada e não deve ser usado.
return 0;