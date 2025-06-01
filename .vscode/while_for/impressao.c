/* 21) Escreva um programa que gere a saída abaixo (10 linhas, 20 * por linha).
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 1 vez.
********************
********************
********************
********************
********************
********************
********************
********************
********************
******************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    for(int i = 0; i < 10; i++){
        for(int l = 0; l < 20; l++){
            printf("*");
            if(l == 19){
                printf("\n");
            }
        }
    }   
    return 0;
}