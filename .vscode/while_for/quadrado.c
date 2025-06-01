//Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int final_faixa = 0;

    printf("----FAIXA DE NUMEROS DE 1 ATÉ O VALOR QUE VOCÊ DESEJAR, DIGITE O VALOR FINAL E TE MOSTRO OS VALORES PARES E SEU QUADRADO---\n");

    printf("\nDigite um valor inteiro: ");
    while (scanf("%d", &final_faixa) != 1 || final_faixa <= 1) {
        printf("*VALOR INVÁLIDO, DIGITE UM INTEIRO MAIOR QUE 1: ");
        while(getchar() != '\n'); //pega o buffer do valor digitado, isso evita um loop infinito.
    }
    
    for(int i = 1; i <= final_faixa; i ++){
        if (i % 2 == 0){
            int quadrado = i*i;
            printf("Valor: %d -> Quadrado: %d\n", i, quadrado);
        }
    }
    
    return 0;
}