/******************************************************************************
Exercício 3
*******************************************************************************/
#include <stdio.h>

int main(){
/*Declaração de variáveis*/
    int opcao;
    float n1, n2, resultado;
/*Entrada de dados*/    
    printf("\n Informe o primeiro número:");
    scanf("%f", &n1);
    printf("\n Informe o segundo número:");
    scanf("%f", &n2);
    printf("\n | CÓDIGO   OPERAÇÃO                       |");
    printf("\n | 1 ------ Soma                           |");
    printf("\n | 2 ------ Subtração (o maior pelo menor) |");
    printf("\n | 3 ------ Multiplicação                  |");
    printf("\n | 4 ------ Divisão                        |");
    printf("\n Agora, digite uma das opções do menu:"); 
    scanf("%i", &opcao);
/*Processamento*/    
    switch(opcao){
        case 1:
        resultado = n1 + n2;
/*Saída de dados*/
        printf("\nO resultado é: %.2f", resultado);
        break;
        
        case 2:
        if(n1 > n2){
            resultado = n1 - n2;
        }
        else{
            resultado = n2 - n1;
        }
/*Saída de dados*/
        printf("\nO resultado é: %.2f", resultado);
        break;
        
        case 3:
        resultado = n1 * n2;
/*Saída de dados*/
        printf("\nO resultado é: %.2f", resultado);
        break;
        
        case 4:
        if(n2 != 0){
/*Saída de dados*/
            resultado = n1/n2; 
            printf("\nO resultado é: %.2f", resultado);
        }
        else{
/*Saída de dados*/
            printf(" Não há como dividir um número por zero.");
        }
        break;
        
        default:
/*Saída de dados*/
        printf(" Opção inválida! Tente novamente.");
    }
    return 0;
}
