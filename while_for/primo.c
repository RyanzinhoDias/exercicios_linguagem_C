/*13) Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número
informado é primo ou não.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]){
    int numero = 0;

    printf("Digite um número para verificar se ele é primo: ");
    while (scanf("%d", &numero) != 1 || numero < 2){
        printf("ERRO: Digite um número inteiro maior que 1: ");
        while(getchar() != '\n');
    }

    int primo = 1; // assume verdade;
    
    for (int i = 2; i <= sqrt(numero); i++){
        if (numero % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) {
        printf("%d É primo!\n", numero);
    } else {
        printf("%d Não é primo.\n", numero);
    }

    return 0;
}