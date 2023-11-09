#include <stdio.h>
#include <stdlib.h>
// Definindo a estrutura
typedef struct {
    int id;
    char nome[50];
    float salario;
} Funcionario;

int main() {
    int n;
    printf("Quantos funcionarios deseja cadastrar? ");
    scanf("%d", &n);
    // Alocando espaco para um array de funcionarios usando malloc
    Funcionario *funcionarios = (Funcionario *)malloc(n * sizeof(Funcionario));
    if (funcionarios == NULL) {
        fprintf(stderr, "Erro na alocacao de memoria.\n");
        return 1;
    }
    // Preenchendo os dados dos funcionarios
    for (int i = 0; i < n; i++) {
        funcionarios[i].id = i + 1;
        printf("Nome do funcionario %d: ", i + 1);
        scanf("%s", funcionarios[i].nome);
        printf("Salario do funcionario %d: ", i + 1);
        scanf("%f", &funcionarios[i].salario);
    }

    // Exibindo os dados dos funcionarios
    printf("\nFuncionarios cadastrados:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", funcionarios[i].id);
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Salario: %.2f\n", funcionarios[i].salario);
    }
    // Liberando a memoria alocada com free
    free(funcionarios);

    return 0;
}
