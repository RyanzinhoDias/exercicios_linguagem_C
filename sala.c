#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float altura = 0, altura_maioresvinte = 0;
    int idade = 0, quantidade_maioresvinte = 0;
    float media_idade = 0, media_altura = 0, quantidade_baixos = 0, idade_baixos = 0;
    
    
    for(int i = 0; i < 5; i++){
        printf("Digite a altura do aluno (em metros): ");
        while (scanf("%f", &altura) != 1 || altura == 0){
            printf("Dado inválido, digite um valor real: ");
            while(getchar() != '\n');
        }
    
        printf("Digite a idade do aluno: ");
        while (scanf("%d", &idade) != 1 || idade == 0){
            printf("Dado inválido, digite um valor inteiro: ");
            while(getchar() != '\n');
        }

        if (idade > 20){
            quantidade_maioresvinte++;
            altura_maioresvinte += altura;
        }

        if (altura < 1.70){
            quantidade_baixos++;
            idade_baixos += idade;
        }
    }

    printf("\n-------------------------SAIDA-----------------------\n");
    if (quantidade_maioresvinte > 0){
        media_altura = altura_maioresvinte / quantidade_maioresvinte;
        printf("> Média de altura com mais de 20 anos de idade: %.2f\n", media_altura);
    } else {
        printf("> Não tem alunos maiores de 20 anos.\n");
    }
    
    if (quantidade_baixos > 0){
        media_idade = idade_baixos / quantidade_baixos;
        printf("> Média de idade com menos de 1.70m de altura: %.2f\n", media_idade);
    } else {
        printf("> Não tem alunos menores de 1,70 metros.\n");
    }
    
    return 0;
}