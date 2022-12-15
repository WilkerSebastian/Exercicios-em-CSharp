/******************************************************************************
Exercício 10
*******************************************************************************/
#include <stdio.h>

int main(){
/*Declaração de variáveis*/
    int opcao;
    float a, b, c;
/*Entrada de dados*/    
    printf("\n Informe o primeiro número:");
    scanf("%f", &a);
    printf("\n Informe o segundo número:");
    scanf("%f", &b);
    printf("\n Informe o segundo número:");
    scanf("%f", &c);
    printf("\n | CÓDIGO   FORMA A ESCREVER                 |");
    printf("\n | 1 ------ Números em ordem crescente       |");
    printf("\n | 2 ------ Números em ordem decrescente     |");
    printf("\n | 3 ------ O maior número fica no meio      |");
    printf("\n Agora, digite uma das opções do menu:"); 
    scanf("%i", &opcao);
/*Processamento*/    
    switch(opcao){
        case 1:
            if (a < b && b < c){
                printf("A ordem crescente é: %.2f, %.2f, %.2f", a, b, c);
            }
            if (a < c && c < b){
                printf("A ordem crescente é: %.2f, %.2f, %.2f", a, c, b);
            }
            if (b < a && a < c){
                printf("A ordem crescente é: %.2f, %.2f, %.2f", b, a, c);
            }        
            if (b < c && c < a){
                printf("A ordem crescente é: %.2f, %.2f, %.2f", b, c, a);
            }   
            if (c < b && b < a){
                printf("A ordem crescente é: %.2f, %.2f, %.2f", c, b, a);
            }
            if (c < a && a < b){
                printf("A ordem crescente é: %.2f, %.2f, %.2f", c, a, b);
            }
        break;
        
        case 2:
            if (a > b && b > c){
                printf("A ordem decrescente é: %.2f, %.2f, %.2f", a, b, c);
            }
            if (a > c && c > b){
                printf("A ordem decrescente é: %.2f, %.2f, %.2f", a, c, b);
            }
            if (b > a && a > c){
                printf("A ordem decrescente é: %.2f, %.2f, %.2f", b, a, c);
            }        
            if (b > c && c > a){
                printf("A ordem decrescente é: %.2f, %.2f, %.2f", b, c, a);
            }   
            if (c > b && b > a){
                printf("A ordem decrescente é: %.2f, %.2f, %.2f", c, b, a);
            }
            if (c > a && a > b){
                printf("A ordem decrescente é: %.2f, %.2f, %.2f", c, a, b);
            }
            break;
        
        case 3:
            if (a > b && b > c){
                printf("A ordem com o maior no meio é: %.2f, %.2f, %.2f", b, a, c);
            }
            if (a > c && c > b){
                printf("A ordem com o maior no meio é: %.2f, %.2f, %.2f", c, a, b);
            }
            if (b > a && a > c){
                printf("A ordem com o maior no meio é: %.2f, %.2f, %.2f", a, b, c);
            }        
            if (b > c && c > a){
                printf("A ordem com o maior no meio é: %.2f, %.2f, %.2f", c, b, a);
            }   
            if (c > b && b > a){
                printf("A ordem com o maior no meio é: %.2f, %.2f, %.2f", b, c, a);
            }
            if (c > a && a > b){
                printf("A ordem com o maior no meio é: %.2f, %.2f, %.2f", a, c, b);
            }
        break;
}
    return 0;
}



