/******************************************************************************
Exercício 4
*******************************************************************************/
#include <stdio.h>

int main(){
/*Declaração de variáveis*/
    int id;
/*Entrada da dados*/
    printf("\n Digite o código de um produto:"); 
    scanf("%d", &id);
    
    if(id == 1){
        printf(" Departamento: Alimento não perecível");
    }
    else if(id >= 2 && id <= 4){
        printf(" Departamento: Alimento perecível");
    }
    else if(id == 5 || id == 6){
        printf(" Departamento: Vestuário");
    }
    else if(id == 7){
        printf(" Departamento: Higiene Pessoal");
    }
    else if(id >= 8 && id <= 15){
        printf(" Departamento: Limpeza e Utensílios Domésticos");
    }
    else{
        printf(" Código inválido!");
    }
    return 0;   
}



