#include <stdio.h>
#include <stdlib.h>

int verifica_inteiro(int entrada){
    while(scanf("%d", &entrada) != 1){
        printf("INVALIDO, digite um valor inteiro.");
    }
    return entrada;
}

int main (int argc, char argv[]){
    int eixo_x, eixo_y;
    
    do {
        printf("Digite um valor para o eixo X: ");
        eixo_x = verifica_inteiro(eixo_x);

        printf("Digite um valor para o eixo Y: ");
        eixo_y = verifica_inteiro(eixo_y);

        if (eixo_x > 0 && eixo_y > 0){
            printf(">>> PRIMEIRO QUADRANTE <<<\n");
        } else if (eixo_x < 0 && eixo_y > 0){
            printf(">>> SEGUNDO QUADRANTE <<<\n");
        } else if (eixo_x < 0 && eixo_y < 0){
            printf(">>> TERCEIRO QUADRANTE <<<\n");
        } else if (eixo_x > 0 && eixo_y < 0) {
            printf(">>> QUARTO QUADRANTE <<<\n");
        } else {
            printf("!!! COORDENADA NULA !!!\n");
        }

    } while (!(eixo_x != 0 ^ eixo_y != 0));
    
    printf("\n\n### PROGRAMA FINALIZADO ###\n");

    return 0;
}