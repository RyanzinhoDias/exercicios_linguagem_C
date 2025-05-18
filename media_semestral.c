#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float nota1, nota2, media;

    printf("Digite a nota da primeira unidade: ");
    while (scanf("%f", &nota1) != 1 || nota1 < 0 || nota1 > 10) {
        printf("\nNota inválida, digite um número válido entre 0 e 10: ");
        while (getchar() != '\n'); //Sem essa linha o loop não funciona quando o digito for um caractere, sem ela o loop fica infinito.
    }

    printf("Digite a nota da segunda unidade: ");
    while (scanf("%f", &nota2) != 1 || nota2 < 0 || nota2 > 10) {
        printf("\nNota inválida, digite um número válido ente 0 e 10: ");
        while (getchar() != '\n'); //Sem essa linha o loop não funciona quando o digito for um caractere, sem ela o loop fica infinito.
    }
    
    media = (nota1 + nota2) / 2;
    
    printf(">>> Média semestral: %.2f\n", media);
    return 0; 
}