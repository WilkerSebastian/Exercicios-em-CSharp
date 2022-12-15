/******************************************************************************
Exercício 8
*******************************************************************************/
#include <stdio.h>

int main(){
/*Declaração de variáveis*/
    int num;
/*Entrada de dados*/
    printf("Informe a senha: 4531.\n");
    scanf("%i", &num);
/*Processamento*/
    if(num == 4531){
/*Saída de dados*/
        printf("Acesso permitido!");
    }
    else{
/*Saída de dados*/
        printf("Acesso negado!");
    }
    return 0;
}




