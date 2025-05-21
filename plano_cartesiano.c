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

    } while (!(eixo_x != 0 ^ eixo_y != 0));
    
    return 0;
}