/*6) Faça um programa que imprima na tela todos os múltiplos entre 1 e 9999.*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int valor, multiplo;
    int i = 1; 
    printf("***Digite um número inteiro maior que 0 e encontre os multiplos entre 1 e 9999***\n");
    printf("Digite um número: ");
    while (scanf("%d", &valor) != 1 || valor < 1){
        printf("\nValor inválido, digite um número inteiro maior que 0: ");
        while (getchar() != '\n');    
    }

    while (1) {
        multiplo = valor * i;
        if (multiplo > 9999){
            break;
        } else {
            if ((valor * (i+1)) > 9999){
                printf("%d.\n", multiplo);
            } else {
                printf("%d, ", multiplo);
            }
        }
        i++;
    }
    printf("\n***FIM***\n");
    
    return 0;
}