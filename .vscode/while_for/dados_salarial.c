/*18) Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade,
sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que
informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00.*/

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

//Função que verifica se o dado de entrada é float
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
    
    int entrada_idade, maior = 0, menor = 0, quantidade, qtd_mulheres = 0;
    float montante, entrada_salario;
    char sexo;
    
    printf("Quantidade de pessoas na amostra: ");
    int qtd_pessoas = validacao_inteiros(quantidade);

    for(int i = 0; i < qtd_pessoas; i++){
        printf("\nDigite idade: ");
        int idade = validacao_inteiros(entrada_idade);
        
        //Recebe e processa o sexo
        printf("Digite o sexo [F/M]: ");
        getchar();
        scanf("%c", &sexo);
        
        //Recebendo Salário e somando o salário a cada iteração
        printf("Digite o seu salario: ");
        float salario = validacao_reais(entrada_salario); 
        montante += salario;
                
        //Verificando mulheres que recebem mais de R$ 2000,00
        if (sexo == 'F' && salario >= 2000){
            qtd_mulheres++;
        }
        
        //Verificanco se o dado atual digitado é maior ou menor que o anteior
        if (i == 0){
            menor = idade;
            maior = idade;
        } else {
            if (idade < menor){
                menor = idade;
            } else if (idade > maior){
                maior = idade;
            }
        }


    }

    float media =  montante/qtd_pessoas;

    //saidas
    printf("\n>>> Media: R$ %.2f", media);
    printf("\n>>> Maior idade: %d\n>>>Menor idade: %d\n", maior, menor);
    printf(">>> A quantidade de mulheres que recebem mais que R$ 2000,00: %d\n\n", qtd_mulheres);
    return 0;
}