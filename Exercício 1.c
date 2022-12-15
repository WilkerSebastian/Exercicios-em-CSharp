/******************************************************************************
Exercício 1
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(){
/*Declaração das variáveis*/
    int opcao;
    float n1, n2, result;
/*Entrada de dados*/
    printf("\nMENU:");
    printf("\n1. Somar dois numeros.");
    printf("\n2. Raiz quadrada de um número.");
    printf("\nDigite uma das opções acima :\n");
    scanf("%i", &opcao);
/*Processamento*/
    switch(opcao){
        case 1:
            printf("Digite o primeiro número:");
            scanf("%f", &n1);
            printf("Digite o segundo número:");
            scanf("%f", &n2);
            result = n1 + n2;
/*Saída de dados do Case 1*/
        printf("A soma dos número é: %2.f", result);
        break;
        
        case 2:
            printf("Digite o número:");
            scanf("%f", &n1);
            result = sqrt(n1);
/*Saída de dados do Case 2*/
        printf("A raiz quadrada do número é: %2.f", result);
        break;
        
        default:
        printf("Esta opção não existe. Tente novamente!");
    }
    return 0;
}



