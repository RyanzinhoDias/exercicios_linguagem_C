#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int valor1, valor2;
    int resultado = 0;

    printf("--- Multiplicando dois valores ---\n");
    printf("Digite o primeiro valor inteiro: ");

    while(scanf("%d", &valor1) != 1){
        printf("Valor INCORRETO, digite um valor INTEIRO: ");
        while (getchar() != '\n');
    }

    printf("Digite o segundo valor inteiro: ");
    while(scanf("%d", &valor2) != 1){
        printf("Valor INCORRETO digite um valor INTEIRO: ");
        while (getchar() != '\n');
    }

    for(int i = 0; i < valor2; i+=1){
        resultado += valor1;
    }

    printf("Resultado: %d\n", resultado);
    return 0;
}