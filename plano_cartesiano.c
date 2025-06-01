/*19) Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de
pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo
será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).
Exemplo de entrada:
2 2
3 -2
-8 -1
-7 1
0 2
Exemplo de saída:
primeiro
quarto
terceiro
segundo*/

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