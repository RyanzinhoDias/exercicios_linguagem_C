#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int divisores, valor = 8;

    do {
        divisores = 0;
        valor +=2;
        for(int i = 1; i <= 10; i++){
            if(valor % i == 0){
                divisores++;
            }
        }

    } while(divisores != 10);
  
    printf("Valor: %d\n", valor);
    return 0;
}