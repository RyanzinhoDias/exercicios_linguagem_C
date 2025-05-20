#include <stdio.h>
#include <stdlib.h>

//Função que verifica se o dado de entrada é inteiro
int validacao_inteiros(int entrada){
    while (scanf("%d", &entrada) != 1){
        printf("INVALIDO, Digite um valor inteiro valido: ");
        while(getchar() != '\n');
    }
    return entrada;
}


int main (int argc, char *argv[]){
    printf("-=- PREENCHA COM A AMOSTRA DA SUA REGIÃO -=-\n");
    printf("-=- Sera possivel informar IDADE, SEXO E SALARIO, ao processar os dados, entregamos a MEDIA SALARIAL, MAIOR E MENOR IDADE, QTD DE MULHERES QUE RECEBEM MAIS DE 2000,00\n");
    
    int entrada_idade, maior = 0, menor = 0, quantidade;
    //float salario;
    //char sexo;
    
    printf("Quantidade de pessoas na amostra: ");
    int qtd_pessoas = validacao_inteiros(quantidade);

    for(int i = 0; i < qtd_pessoas; i++){
        printf("Digite idade: ");
        int idade = validacao_inteiros(entrada_idade);
        
        //Verificanco se o dado atual digitado é maior ou menor que o anteior
        if (i == 0){
            menor = idade;
            maior = idade;
        } else {
            if (idade > menor){
                menor = idade;
            } else if (idade < maior){
                maior = idade;
            }
        }
    }

    printf("\nMaior idade: %d\nMenor idade: %d\n", maior, menor);
    return 0;
}