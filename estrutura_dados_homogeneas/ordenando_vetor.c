/*7) Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e
após a ordenação.*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    int vetor[100];

    for (int i = 0; i < 100; i++){
        vetor[i] = rand() % 100;
    }
    
    for (int i = 0; i < 100; i++){
        int min_indice = i;

        for (int j = i; j < 100; j++){
            if(vetor[j] < vetor[min_indice]){
                min_indice = j;
            }
        }

        int aux = 0;
        if(vetor[i] > vetor[min_indice]){
            aux = vetor[min_indice];
            vetor[min_indice] = vetor[i];
            vetor[i] = aux;
        }

        //printf("\n\n%d\n\n", min_indice);
    }

    for(int i = 0; i < 100; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}