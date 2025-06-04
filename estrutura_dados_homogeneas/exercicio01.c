/* 1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int entrada = 0;
    int vetor_entrada[10];

    for (int i = 1; i <= 10; i++) {
        printf("Digite um valor para a %dª posição ", i);
        scanf("%d", &entrada);
        vetor_entrada[i] = entrada;
    }

    for (int p = 0; p <= 10; p++) {
        printf(">>> Posição: %d\n", p);
    }

    return 0;

}