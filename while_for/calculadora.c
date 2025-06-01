/*8) Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int opcao;
    float valor1, valor2;
    
    printf("1 - Somar;\n2 - Subtrair;\n3 - Multiplicar;\n4 - Dividir;\n0 - Sair.\n");
    
    while (opcao != 0){

    printf("Escolha a opção que você deseja: ");
    while (scanf("%d", &opcao) != 1 || opcao > 4 || opcao < 0){
        printf("Valor inválido, digite um valor pertencente ao menu: ");
        while(getchar() != '\n');
    }
    
    switch (opcao){
        case 0:
            printf("Finalizando programa...\n");
            break;
        case 1:
            //contenção de erros de entrada de dado 1;
            printf("Digite um valor para executar a soma: ");
            while (scanf("%f", &valor1) != 1){ 
                printf("Valor inválido, digite um valor real: ");
                while(getchar() != '\n');//captuda de buffer de entrada de valor real, sem essa linha ao chegar nesse trecho o código entrará em loop infinito.
            }
            //contenção de erros de entrada de dado 2;
            printf("Digite outro valor para executar a soma: ");
            while (scanf("%f", &valor2) != 1){
                printf("Valor inválido, digite um valor real: ");
                while(getchar() != '\n');
            }
            //operação e impressão soma;
            printf("> Soma entre %.2f + %.2f = %.2f\n", valor1, valor2, valor1 + valor2);
            break;
        case 2:
            //contenção de erros de entrada de dado1;
            printf("Digite um valor para executarmos a subtração: ");
            while(scanf("%f", &valor1) != 1) {
                printf("Valor inválido, digite um valor real: ");
                while(getchar() != '\n'); 
            }

            printf("Digite um segundo valor para executarmos a subtração: ");
            while(scanf("%f", &valor2) != 1){
                printf("Valor inválido, digite um valor real: ");
                while(getchar() != '\n'); 
            }
            //operação e impressão da subtração;
            printf("> Subtração entre %.2f - %.2f = %.2f\n", valor1, valor2, valor1 - valor2);
            break;
        case 3: 
            //contenção de erros de entrada de dado1;
            printf("Digite um valor para executarmos a multiplicação: ");
            while(scanf("%f", &valor1) != 1) {
                printf("Valor inválido, digite um valor real: ");
                while(getchar() != '\n'); 
            }

            printf("Digite um segundo valor para executarmos a multiplicação: ");
            while(scanf("%f", &valor2) != 1){
                printf("Valor inválido, digite um valor real: ");
                while(getchar() != '\n'); 
            }
            //operação e impressão da subtração;
            printf("> Multiplicação entre %.2f * %.2f = %.2f\n", valor1, valor2, valor1 * valor2);
            break;
        case 4:
            //contenção de erros de entrada de dado1;
            printf("Digite um valor para executarmos a divisão: ");
            while(scanf("%f", &valor1) != 1) {
                printf("Valor inválido, digite um valor real: ");
                while(getchar() != '\n'); 
            }

            printf("Digite um segundo valor para executarmos a divisão: ");
            while(scanf("%f", &valor2) != 1){
                printf("Valor inválido, digite um valor real: ");
                while(getchar() != '\n'); 
            }
            //operação e impressão da subtração;
            printf("> Multiplicação entre %.2f / %.2f = %.2f\n", valor1, valor2, valor1 / valor2);
            break;
        default:
            printf("Opção inválida.");
            break;
        }

    }
    return 0;
}