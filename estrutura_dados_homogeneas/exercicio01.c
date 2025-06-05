/* 1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int vetor_entrada[10];
    int vetor_quadrado[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        while (scanf("%d", &vetor_entrada[i]) != 1){
            printf("ERRO: Digite um número inteiro: ");
            while(getchar() != '\n');
        }

        //adicionando o quadrado dos valores no seu respectivo vetor, diretamente na entrada, pois implementar outro loop seria mais custo de tempo
        vetor_quadrado[i] = vetor_entrada[i] * vetor_entrada[i]; 
    }
    
    for (int p = 0; p < 10; p++) {
        printf("\n>>> Vetor normal: %d | Vetor quadrado: %d\n", vetor_entrada[p], vetor_quadrado[p]);
    }

    return 0;
}
