/*5. Média de Notas
Crie um programa que peça as 4 notas de um aluno. Use uma função chamada calcula_media(float n1, float n2, 
float n3, float n4) que retorne a média. Crie uma segunda função chamada situacao(float media) que retorne:
"Aprovado" se a média for maior ou igual a 7;
"Recuperação" se for entre 5 e 6.9;
"Reprovado" se for menor que 5.*/

#include <stdio.h>
#include <string.h>

float calcula_media(float nota1, float nota2, float nota3, float nota4){
    float soma = nota1 + nota2 + nota3 + nota4;
    float media = soma / 4;

    return media;
}

char *situacao(float media){

    if (media >= 7){
        return "Aprovado";
    } else if (media >= 5) {
        return "Recuperação";
    } else {
        return "Reprovado";
    }
}

float verifica_float(float notas){
    while (scanf("%f", &notas) != 1){
            printf("[ERRO], digite uma nota valida: ");
            while(getchar() != '\n');
        }
        return notas;
}

int main(){
    float nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0;
    
    printf("Digite o valor da 1ª nota: ");
    nota1 = verifica_float(nota1);

    printf("Digite o valor da 2ª nota: ");
    nota2 = verifica_float(nota2);

    printf("Digite o valor da 3ª nota: ");
    nota3 = verifica_float(nota3);

    printf("Digite o valor da 4ª nota: ");
    nota4 = verifica_float(nota4);

    float media = calcula_media(nota1, nota2, nota3, nota4);
    char  *t = situacao(media);

    printf("\n%s\n", t);
    return 0;
}

