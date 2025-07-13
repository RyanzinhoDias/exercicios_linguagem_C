/*Exercı́cio #1: Manipulação com Ponteiros
Crie duas variáveis, uma do tipo int e outra do tipo float. Crie um ponteiro para cada variável.
Usando apenas os ponteiros, faça com que:
A primeira variável receba o dobro de seu valor || A segunda variável receba o triplo de seu valor
Restrições:
Não use diretamente os nomes das variáveis para alterar seus valores || A manipulação dos valores deve ser feita 
somente por meio dos ponteiros*/

#include <stdio.h>

int main(){
    int a = 6;
    float b = 5.85;

    int *p_a = &a;
    float *p_b = &b;

    *p_a = *p_a * 2;
    *p_b *= 3;

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %.2f\n", b);
    
    printf("Valor do ponteiro p_a: %d\n", *p_a);
    printf("Valor do ponteiro p_b: %.2f\n", *p_b);
    return 0;
}