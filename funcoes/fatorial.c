/*3. Fatorial com Função: Crie uma função chamada fatorial(int n) que receba um número inteiro e retorne 
seu fatorial. Exemplo: fatorial(5) deve retornar 120.*/

#include <stdio.h>

int fatorial(int valor){
    for (int i = valor-1; i > 1; i--){
        valor *= i;
    }

    return valor;
}

int main(){
    printf("\n%d\n", fatorial(5));
    return 0;
}