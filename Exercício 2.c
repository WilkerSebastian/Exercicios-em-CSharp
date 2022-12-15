/******************************************************************************
Exercício 2
*******************************************************************************/
#include <stdio.h>
#include <math.h>

/************FLOAT**************/
int main(){
/*Declaração das variáveis*/
    float num;
/*Entrada de dados*/
    printf("Digite um número:");
    scanf("%f", &num);
/*Processamento*/
    if(fmod(num, 2) == 0){
/*Saída de dados*/
        printf("Este número é par!");
    }
    if(fmod(num, 2) == 1){
/*Saída de dados*/
        printf("Este número é ímpar!");
    }
    return 0;
}
/************INT***************/
int main(){
/*Declaração das variáveis*/
    int num;
/*Entrada de dados*/
    printf("Digite um número:");
    scanf("%i", &num);
/*Processamento*/
    if(num % 2 == 0){
/*Saída de dados*/
        printf("Este número é par!");
    }
    if(num % 2 == 1){
/*Saída de dados*/
        printf("Este número é ímpar!");
    }
    return 0;
}

