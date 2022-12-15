/******************************************************************************
Exercício 9
*******************************************************************************/
#include <stdio.h>

int main(){
/*Declaração de variáveis*/
    float num1, num2, num3;
/*Entrada de dados*/
    printf("Digite o primeiro número:");
    scanf("%f", &num1);
    printf("Digite o segundo número:");
    scanf("%f", &num2);
    printf("Digite o terceiro número:");
    scanf("%f", &num3);
/*Processamento*/
    if (num1 < num2 && num2 < num3){
/*Saída de dados*/
        printf("A ordem crescente é: %.2f, %.2f, %.2f", num1, num2, num3);
    }
    if (num1 < num3 && num3 < num2){
/*Saída de dados*/
        printf("A ordem crescente é: %.2f, %.2f, %.2f", num1, num3, num2);
    }
    if (num2 < num1 && num1 < num3){
/*Saída de dados*/
        printf("A ordem crescente é: %.2f, %.2f, %.2f", num2, num1, num3);
    }        
    if (num2 < num3 && num3 < num1){
/*Saída de dados*/
        printf("A ordem crescente é: %.2f, %.2f, %.2f", num2, num3, num1);
    }   
    if (num3 < num2 && num2 < num1){
/*Saída de dados*/
        printf("A ordem crescente é: %.2f, %.2f, %.2f", num3, num2, num1);
    }
    if (num3 < num1 && num1 < num2){
/*Saída de dados*/
        printf("A ordem crescente é: %.2f, %.2f, %.2f", num3, num1, num2);
    }
    return 0;
}



