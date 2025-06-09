/* 3) Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1º elemento com o último, o 2ª com o penúltimo, ... até o 10ª com o 11º. Imprima o vetor N
modificado. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //criando vetor com 20 posições
    int vetor1[20];
    //adicionando um valor random até 50 para cada posição do vetor
    for (int i = 0; i < 20; i++){
        vetor1[i] = rand() % 50; 
    }
    //percorrendo o vetor para realizar a impressão
    for (int p = 0; p < 20; p++){
        printf("%d ", vetor1[p]);
    }

    return 0;
}