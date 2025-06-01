//Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1 centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char argv[]){
    float investimento = 0.01;
    
    for(int i = 1; i <= 30; i++){
        printf("%.2f\n", investimento);
        investimento *= 2;

    }

    return 0;
}