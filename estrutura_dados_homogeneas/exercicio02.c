/*2) Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
em um terceiro vetor. Imprima os três vetores na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int vetor1[25], vetor2[25];

    for (int i = 0; i <= 25; i++){
        vetor1[i] = rand() % 100;
        vetor2[i] = rand() % 100;
    }

    for (int imprimir = 0; imprimir < 25; imprimir++){
        printf("%d ", vetor1[imprimir]);
    }

    printf("\n");

    for (int imprimir2 = 0; imprimir2 < 25; imprimir2++){
        printf("%d ", vetor2[imprimir2]);
    }

    printf("\n");

    return 0;
}