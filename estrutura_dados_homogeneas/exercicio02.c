/*2) Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
em um terceiro vetor. Imprima os três vetores na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int vetor1[25], vetor2[25], vetor_soma[25];

    for (int i = 0; i <= 25; i++){
        // rand() % 100 -> implica que os numeros adicionados ao vetor estejam até 100.
        vetor1[i] = rand() % 100;
        vetor2[i] = rand() % 100; // Gerando e armazenando aqui para diminuir a quantidade de loop
    }

    //adicionando resultados de v1 + v2
    for (int p = 0; p <= 25; p++){
        vetor_soma[p] = vetor1[p] + vetor2[p];
    }
    
    //impressão v1
    printf("Vetor 1: ");
    for (int imprimir = 0; imprimir < 25; imprimir++){
        printf("%d ", vetor1[imprimir]);
    }
    printf("\n");

    //impressão v2
    printf("Vetor 2: ");
    for (int imprimir2 = 0; imprimir2 < 25; imprimir2++){
        printf("%d ", vetor2[imprimir2]);
    }
    printf("\n");

    //impressão v3
    printf("SOMA: ");
    for (int imprimir3 = 0; imprimir3 < 25; imprimir3++){
        printf("%d ", vetor_soma[imprimir3]);
    }

    return 0;
}