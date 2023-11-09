/*Exercício 2: Crie uma estrutura chamada Data que contenha os campos dia, mês e ano.

·        Escreva uma função que receba dois ponteiros para Data e retorne 1 se a primeira data for mais recente que a segunda, 0 se forem iguais, e -1 se a segunda data for mais recente que a primeira.

·        No programa principal, aloque dinamicamente duas variáveis do tipo Data, leia os valores dos campos e chame a função criada.

·        Imprima na tela o resultado da função e libere a memória alocada.*/
#include <stdio.h>
#include <stdlib.h>


int dataMaior(Data * ptrPrimeiraData, Data * ptrSegundaData);
typedef struct 
{
    int dia;
    int mes;
    int ano;
}Data;

int main(int argc, char const *argv[])
{
    int retornoData = 0;
    Data *ptrPrimeiraData = (Data *)malloc(1 * sizeof(Data));
       Data *ptrSegundaData = (Data *)malloc(1 * sizeof(Data));

    retornoData = dataMaior(ptrPrimeiraData, ptrSegundaData);
    
    switch (retornoData)
    {
    case 0:
       printf("AS DATAS SÃO IGUAIS!");
        break;
    case 1:
    printf("A PRIMEIRA DATA É MAIS RECENTE QUE A SEGUNDA!");
    break;
     case -1:
    printf("A SEGUNDA DATA É MAIS RECENTE QUE A PRIMEIRA!");
    break;
    default:
        break;
    }

    
    return 0;
}

int dataMaior(Data * ptrPrimeiraData, Data * ptrSegundaData){
    if (ptrPrimeiraData->ano > ptrSegundaData->ano)
    {
        return 1;
    }else if(ptrPrimeiraData->ano == ptrSegundaData->ano && ptrPrimeiraData->mes > ptrSegundaData->mes){
        return 1;
    }else if(ptrPrimeiraData->ano == ptrSegundaData->ano && ptrPrimeiraData->mes == ptrSegundaData->mes && ptrPrimeiraData->dia > ptrSegundaData->dia){
        return 1;
    }else if(ptrPrimeiraData->ano == ptrSegundaData->ano && ptrPrimeiraData->mes == ptrSegundaData->mes && ptrPrimeiraData->dia == ptrSegundaData->dia){
        return 0;
    }else{
        return -1;
    }
    
}
