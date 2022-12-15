/******************************************************************************
Exercício 6
*******************************************************************************/
#include <stdio.h>

int main(){
/*Declaração de variáveis*/
    float salario_inicial, salario_final, bonificacao;
/*Entrada de dados*/
    printf("Digite seu salário:\n");
    scanf("%f", &salario_inicial);
/*Processamento*/
    if(salario_inicial <= 500 && salario_inicial <= 600){
        bonificacao = (salario_inicial * 5)/100;
        salario_final = salario_inicial + bonificacao + 150;
/*Saída de dados*/
        printf("Seu salário final é de: %.2f", salario_final);
    }
    else if(salario_inicial > 500 && salario_inicial <= 600){
        bonificacao = (salario_inicial * 12)/100;
        salario_final = salario_inicial + bonificacao + 150;
/*Saída de dados*/
        printf("Seu salário final é de: %.2f", salario_final);
    }
    else if(salario_inicial > 500 && salario_inicial <= 1200){
        bonificacao = (salario_inicial * 12)/100;
        salario_final = salario_inicial + bonificacao + 100;
/*Saída de dados*/
        printf("Seu salário final é de: %.2f", salario_final);
    }
    else{
        if(salario_inicial > 1200){
        bonificacao = 0;
        salario_final = salario_inicial + bonificacao + 100;
/*Saída de dados*/
        printf("Seu salário final é de: %.2f", salario_final);
    }
    return 0;
}
}


