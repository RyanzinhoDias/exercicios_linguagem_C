/* 3) Escrever um programa que tem um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1º elemento com o último, o 2ª com o penúltimo, ... até o 10ª com o 11º. Imprima o vetor N
modificado. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //criando vetor com 20 posições
    int vetor1[20];
    //criando variável com valor 20, para auxiliar na troca
    int aux_final = 19;

    //adicionando um valor random até 50 para cada posição do vetor
    for (int i = 0; i < 20; i++){
        vetor1[i] = rand() % 50; 
    }
    
    printf("\n--- ANTES DO PROCESSAMENTO ---\n");
    for (int p = 0; p < 20; p++){
        printf("%d ", vetor1[p]);
    }
    printf("\n");

    for (int troca = 0; troca < 10; troca++){
        //variavel auxiliar para guardar o valor na troca
        int aux = vetor1[troca];
        ///efetuando a troca de valores
        vetor1[troca] = vetor1[aux_final];
        vetor1[aux_final] = aux;
        //decrementando um valor do final
        aux_final--;
    }

    printf("\n--- APÓS O PROCESSAMENTO ---\n");
    //percorrendo o vetor para realizar a impressão
    for (int p = 0; p < 20; p++){
        printf("%d ", vetor1[p]);
    }
    printf("\n");

    return 0;
}