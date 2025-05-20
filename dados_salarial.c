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

float validacao_reais(float entrada){
    while (scanf("%f", &entrada) != 1){
        printf("INVALIDO, digite um valor real: ");
        while(getchar() != '\n');
    }
    return entrada;
}


int main (int argc, char *argv[]){
    printf("-=- PREENCHA COM A AMOSTRA DA SUA REGIÃO -=-\n");
    printf("-=- Sera possivel informar IDADE, SEXO E SALARIO, ao processar os dados, entregamos a MEDIA SALARIAL, MAIOR E MENOR IDADE, QTD DE MULHERES QUE RECEBEM MAIS DE 2000,00\n");
    
    int entrada_idade, maior = 0, menor = 0, quantidade;
    float montante, entrada_salario;
    //char sexo;
    
    printf("Quantidade de pessoas na amostra: ");
    int qtd_pessoas = validacao_inteiros(quantidade);

    for(int i = 0; i < qtd_pessoas; i++){
        printf("Digite idade: ");
        int idade = validacao_inteiros(entrada_idade);
        
        //Recebendo Salário e somando o salário a cada iteração
        printf("Digite o seu salario: ");
        float salario = validacao_reais(entrada_salario); 
        montante += salario;

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

    float media =  montante/qtd_pessoas;
    printf("Media: R$ %.2f", media);
    printf("\nMaior idade: %d\nMenor idade: %d\n", maior, menor);
    return 0;
}