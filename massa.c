/*Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
se torne menor que 0,05 gramas.*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float valor, tempo;

    printf("\nDigite um valor: ");
    while (scanf("%f", &valor) != 1 || valor < 1) {
        printf("*VALOR INVÁLIDO, DIGITE UM INTEIRO MAIOR QUE 0: ");
        while(getchar() != '\n'); //pega o buffer do valor digitado, isso evita um loop infinito.
    }

    while (valor > 0.05){
        valor = valor / 2;
        tempo += 0.50;
        printf("Valor: %.2f ====>>> tempo: %0.2f\n", valor, tempo);
    }
    return 0;

}