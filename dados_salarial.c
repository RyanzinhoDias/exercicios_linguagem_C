#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    printf("-=- PREENCHA COM A AMOSTRA DA SUA REGIÃO -=-\n");
    printf("-=- Sera possivel informar IDADE, SEXO E SALARIO, ao processar os dados, entregamos a MEDIA SALARIAL, MAIOR E MENOR IDADE, QTD DE MULHERES QUE RECEBEM MAIS DE 2000,00\n");

    int idade, maior = 0, menor = 0, qtd_pessoas;
    //float salario;
    //char sexo;
    
    printf("Quantidade de pessoas na amostra: ");

    while (scanf("%d", &qtd_pessoas) != 1){
        printf("INVALIDO, Digite um valor inteiro valido: ");
        while(getchar() != '\n');
    }

    for(int i = 0; i < qtd_pessoas; i++){
        
    }

    return 0;
}