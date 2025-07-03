/*2. Trocar o Conteúdo de Duas Variáveis: Crie um procedimento chamado trocar(int *a, int *b) 
que troque os valores de duas variáveis inteiras utilizando ponteiros.*/

#include <stdio.h>

void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int valor = 0;
    int valor1 = 3;
    
    printf("Antes da troca de valores: %d || %d\n", valor, valor1);
    trocar(&valor, &valor1);
    printf("Após a troca de valores: %d || %d\n", valor, valor1);
    return 0;
}