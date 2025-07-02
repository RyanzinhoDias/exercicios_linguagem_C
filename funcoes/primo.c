/*2. Verificar se um número é primo: Crie uma função chamada eh_primo(int n) que receba um número inteiro e
retorne 1 se ele for primo ou 0 caso contrário. No main, peça um número ao usuário e use a função 
para informar se ele é primo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int eh_primo(int valor){
    int aux_retorno = 1;

    for (int i = 2; i <= sqrt(valor); i++){
        if (valor % i == 0){
            aux_retorno = 0;
            break;
        }
    }
    
    return aux_retorno;
}

int main(){
    int numero;

    printf("Digite um valor para verificar se é primo: ");
    while (scanf("%d", &numero) != 1 || numero < 2){
        printf("ERRO: Digite um número inteiro maior que 1: ");
        while(getchar() != '\n');
    }

    printf("Se o resultado for 0 NÃO É PRIMO, se for 1 É PRIMO: %d\n\n", eh_primo(numero));
    
    return 0;
}