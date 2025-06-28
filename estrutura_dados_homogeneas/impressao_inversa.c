/*6) Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um
código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.*/

#include <stdio.h>

float verifica_float(float elemento){
    while(scanf("%f", &elemento) != 1){
        printf("[ERROR] Digite um valor do tipo real: ");
        while(getchar() != '\n');
    }
    return elemento;
}

void menu(){
    printf("     \n--- DIGITE ---\n");
    printf("0 - Finalizar o programa\n1 - Imprimir o vetor\n2 - Imprimir o vetor inverso\n");
}

int main(){
    float vetor[10], elem;
    int opcao;

    for (int i = 0; i < 10; i++){
        printf("Digite um valor do tipo [REAL]: ");
        vetor[i] = verifica_float(elem);
    }    
    
    menu();
    
    do {
        printf("\nEscolha uma dessas opcoes: ");
        opcao = verifica_float(opcao);

        switch (opcao) {
        case 1:
            printf("ORDEM NORMAL: ");
            for (int i = 0; i < 10; i++){
                printf("%.2f ", vetor[i]);
            }
            break;
        case 2:
            printf("ORDEM INVERSA: ");
            for (int i = 9; i >= 0; i--){ 
                printf("%.2f ", vetor[i]);
            }
            break;
        default:
            break;
        }

    } while (opcao != 0);
    printf("Programa finalizado.\n");

    return 0;
}