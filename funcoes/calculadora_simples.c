/*1. Calculadora Simples com Funções: Crie um programa que peça dois números ao usuário e, em seguida, 
mostre o resultado das quatro operações básicas: soma, subtração, multiplicação e divisão. Cada operação 
deve ser feita em uma função separada.*/

#include <stdio.h>

float somar(float valor1, float valor2){
    return valor1 + valor2;
}

float subtrair(float valor1, float valor2){
    return valor1 - valor2;
}

float multiplicar(float valor1, float valor2){
    return valor1 * valor2;
}

float dividir(float valor1, float valor2){
    return valor1 / valor2;
}

int main(){
    float soma = somar(5, 10);
    float subtracao = subtrair(5, 10);
    float multiplicacao = multiplicar(5, 10);
    float divisao = dividir(5, 10);


    printf("Resultado função soma: %.2f\n", soma);
    printf("Resultado função subtrair: %.2f\n", subtracao);
    printf("Resultado função multiplicar: %.2f\n", multiplicacao);
    printf("Resultado função dividir: %.2f\n", divisao);
    return 0;
}