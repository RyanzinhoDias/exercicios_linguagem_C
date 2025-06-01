/* 23) Escreva um programa que gere a saída abaixo.
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 2 vezes.
*
**
***
****
*****
******
*******
******** */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char argv[]){
    int i, l;

    for(i = 0; i <= 8; i++){
        for(l = 0; i > l; l++){
            printf("*");
        }

        if (l == i){
            printf("\n");
        }
    } 
    return 0;
}
