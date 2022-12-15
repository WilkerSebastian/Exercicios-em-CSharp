/******************************************************************************
Exercício 4
*******************************************************************************/
#include <stdio.h>

int main(){
/*Declaração de variáveis*/
    int opcao;
    float salario_atual, aumento, novo_salario;
/*Entrada da dados*/
    printf("\n Informe o valor do seu salário:");
    scanf("%f", &salario_atual);
    printf("\n | CÓDIGO   CARGO      |");
    printf("\n | 1 ------ Escrituário|");
    printf("\n | 2 ------ Secretário |");
    printf("\n | 3 ------ Caixa      |");
    printf("\n | 4 ------ Gerente    |");
    printf("\n | 5 ------ Diretor    |");
    printf("\n Agora, digite uma das opções do menu:"); 
    scanf("%i", &opcao);
/*Processamento*/     
    switch(opcao){
        case 1:
        aumento = (salario_atual * 50) / 100;
        novo_salario = salario_atual + aumento;
/*Saída de dados*/
        printf("\n- Cargo: Escrituário");
        printf("\n- Aumento: R$%.2f", aumento);
        printf("\n- Novo salário: R$%.2f", novo_salario);
        break;
        
        case 2:
        aumento = (salario_atual * 35) / 100;
        novo_salario = salario_atual + aumento;
/*Saída de dados*/
        printf("\n- Cargo: Secretátio");
        printf("\n- Aumento: R$%.2f", aumento);
        printf("\n- Novo salário: R$%.2f", novo_salario);
        break;
        
        case 3:
        aumento = (salario_atual * 20) / 100;
        novo_salario = salario_atual + aumento;
/*Saída de dados*/
        printf("\n- Cargo: Caixa");
        printf("\n- Aumento: R$%.2f", aumento);
        printf("\n- Novo salário: R$%.2f", novo_salario);
        break;
        
        case 4:
        aumento = (salario_atual * 10) / 100;
        novo_salario = salario_atual + aumento;
/*Saída de dados*/
        printf("\n- Cargo: Gerente");
        printf("\n- Aumento: R$%.2f", aumento);
        printf("\n- Novo salário: R$%.2f", novo_salario);
        break;
        
        case 5:
        aumento = 0;
        novo_salario = salario_atual + aumento;
/*Saída de dados*/
        printf("\n- Cargo: Diretor");
        printf("\n- Aumento: R$%.2f", aumento);
        printf("\n- Novo salário: R$%.2f", novo_salario);
        break;
        
        default:
/*Saída de dados*/
        printf(" Opção inválida! Tente novamente.");
    }
    return 0;
}
