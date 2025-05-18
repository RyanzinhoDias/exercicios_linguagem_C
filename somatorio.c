#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int final_faixa, somatorio = 0;
    printf("\t\t---SOMATÓRIO---\n");
    printf("Digite um valor inteiro final para a faixa de números: ");
    
    while (scanf("%d", &final_faixa) != 1 || final_faixa < 1){
        printf("Valor inválido, digite um valor inteiro maior que 0: ");
        while(getchar() != '\n');       
    }
    
    for(int i = 1; i < final_faixa; i++){
        somatorio += i;

        printf("%d", i);
        if (i + 1 == final_faixa){
            printf(".");
        } else {
            printf(" + ");
        }
    }

    printf("\n\nSOMATÓRIO = %d\n\n", somatorio);
    return 0;
}   