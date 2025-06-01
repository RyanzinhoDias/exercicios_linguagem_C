/*17) Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o
programa deve imprimir na tela quantos números positivos e negativos foram digitados.*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int valor, positivo = 0, negativo = 0;

    printf("--- Digite numeros inteiros, para finalizar o programa digite 0 ---\n");
    
    do{
        printf("Digite um valor: ");
        
        while(scanf("%d", &valor) != 1){
            printf("INVALIDO, Digite um valor INTEIO: ");
            while(getchar() != '\n');
        }
        
        if (valor > 0) {
            positivo++;
        } else if (valor < 0) {
            negativo++;
        }

    } while (valor != 0);
    
    
    printf("Positivos: %d\nNegativos: %d\n", positivo, negativo);

    return 0;
}