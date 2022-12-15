/******************************************************************************
Exercício 5
******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    float salario_atual, salario_comreajuste, imposto;
    printf("-------------------------Menu de Opções-------------------------");
    printf("\n1 - Imposto");
    printf("\n2 - Novo salário");
    printf("\n3 - Classificação\n");
    printf("-----------------------------------------------------------------");
    printf("\nDigite a opção desejada: ");
    scanf("%i", &opcao);
    printf("-----------------------------------------------------------------\n");
    printf("Informe o valor do seu salário atual: ");
    scanf("%f", &salario_atual);
    switch(opcao){
        case 1:
        if (salario_atual < 500 && salario_atual > 0){
            imposto = (salario_atual * 5)/100;
            printf("O valor que deverá ser pago de imposto é de: R$%.2f", imposto);
        }
        if (salario_atual >= 500 && salario_atual <= 850 ){
            imposto = (salario_atual * 10)/100;
            printf("O valor que deverá ser pago de imposto é de: R$ %.2f", imposto);
        }
        if (salario_atual > 850){
            imposto = (salario_atual * 15)/100;
            printf("O valor que deverá ser pago de imposto é de: R$%.2f", imposto);
        }
        if (salario_atual <= 0){
            printf("Salário inválido.");
        }
        break;
        
        case 2:
        if (salario_atual < 450 && salario_atual > 0){
            salario_comreajuste = (salario_atual + 100);
            printf("\nO valor total do seu salário com o reajuste é de: R$%.2f", salario_comreajuste);
        }
        if (salario_atual >= 450 && salario_atual < 750){
            salario_comreajuste = (salario_atual + 75);
            printf("\nO valor total do seu salário com o reajuste é de: R$%.2f", salario_comreajuste);
        }
        if (salario_atual >= 750 && salario_atual <= 1500){
            salario_comreajuste = (salario_atual + 50);
            printf("\nO valor total do seu salário com o reajuste é de: R$%.2f", salario_comreajuste);
        }
        if (salario_atual > 1500){
            salario_comreajuste = (salario_atual + 25);
            printf("\nO valor total do seu salário com o reajuste é de: R$%.2f", salario_comreajuste);
        }
        if (salario_atual <= 0){
            printf("Salário inválido.");
        }
        break;
        
        case 3:
        if (salario_atual <= 700 && salario_atual > 0){
            printf("Mal remunerado!");
        }
        if (salario_atual > 700){
            printf("Bem remunerado!");
        }
        if (salario_atual <= 0){
            printf("Salário inválido.");
        }
        break;
        
        default:
        printf("Opção inválida! Tente novamente.");
    }
    return 0;
}


