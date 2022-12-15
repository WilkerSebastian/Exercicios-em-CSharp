/******************************************************************************
Exercício 11
*******************************************************************************/
#include <stdio.h>

int main(){
/*Declaração de variáveis*/
    int opcao;
    float valor_inicial, valor_final, desconto;
/*Entrada de dados*/
    printf("Digite o valor do produto:");
    scanf("%f", &valor_inicial);
    printf("\n | CÓDIGO   FORMA DE PAGAMENTO |");
    printf("\n | 1 ------ À vista            |");
    printf("\n | 2 ------ À prazo            |");
    printf("\n Escolha a forma de pagamento:");
    scanf("%i", &opcao);
/*Processamento*/
    switch(opcao){
        case 1:
        desconto = (valor_inicial * 10)/100;
        valor_final = valor_inicial - desconto;
/*Saída de dados*/
        printf("O valor final é de: %.2f reais", valor_final);
        break;
        
        case 2:
        desconto = 0;
        valor_final = valor_inicial - desconto;
/*Saída de dados*/
        printf("O valor final é de: %.2f reais", valor_final);
        break;
        
        default:
/*Saída de dados*/
        printf("Esta opção não existe! Tente novamente.");
    }
    return 0;
}



