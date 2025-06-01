/* 1) Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e apresentar a
tabuada. Exemplo:
Entrada 7
Saída:
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int value;
    printf("Enter an integer between 1 and 10 to generate the multiplication table: ");
    
    while (scanf("%d", &value) != 1 || value < 1 || value > 10){
        printf("Invalid value, enter a value between 1 and 10:\n");
        while (getchar() != '\n');
    }
    
    for(int i = 1; i <= 10; i+=1){
        int result = value * i;
        if (i == 10) {
            printf("%d * %d = %5d\n", value, i, value * i);
        } else {
            printf("%d * %d  = %5d\n", value, i, value * i);
        }
     
    }
    
    return 0;
}
