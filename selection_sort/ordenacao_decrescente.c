/*Modifique o algoritmo Selection Sort para ordenar um vetor de inteiros em ordem decrescente.*/

#include <stdio.h>

int verifica_inteiro(int valor){
    while (scanf("%d", &valor) != 1){
        printf("!!! ERRO !!! Digite um valor inteiro válido: ");
        while(getchar() != '\n');
    }
    return valor;
}

void ordenacao_selecao(int lista[10]){
    int c = 0;
    for (int i = 0; i < 10; i++){
        int menor_indice = i;

        for (int j = i; j < 10; j++){
            if(lista[menor_indice] < lista[j]){
                menor_indice = j;
            }
        }
        
        if (lista[i] < lista[menor_indice]){
            int aux = lista[i];
            lista[i] = lista[menor_indice];
            lista[menor_indice] = aux;
        }
    }
}

void exibir_vetor(int lista[10]){
    for (int i = 0; i < 10; i++){
        printf("%d ", lista[i]);
    }
}

int main(){
    int lista[10];
    int valor = 0;

    for (int i = 0; i < 10; i++){
        printf("Adicione um valor: ");
        lista[i] = verifica_inteiro(valor);
    }

    printf("\nVetor antes de ser ordenado: ");
    exibir_vetor(lista);

    ordenacao_selecao(lista);

    printf("\nVetor após ser ordenado: ");
    exibir_vetor(lista);
    printf("\n");
    return 0; 
}