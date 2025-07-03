/*1. Exibir Tabuada de um Número: Crie um procedimento chamado exibir_tabuada(int n) que exiba a tabuada
do número n de 1 a 10.*/

#include <stdio.h>

void exibir_tabuada(int valor){
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %5d\n", valor, i, valor * i);
    }
}

int main(){
    exibir_tabuada(5);
    return 0;
}