/*Preencher Vetor com Zeros: Crie um procedimento zerar_vetor(int v[], int tamanho) que 
percorra um vetor e atribua o valor zero a todos os seus elementos.*/

#include <stdio.h>

void zerar_vetor(int vetor[], int tamanho){
    int aux = 0;
    for (int i; i < tamanho; i++){
        vetor[i] = aux;
    }
}

void exibir_vetor(int vetor[], int tamanho){
    for (int i; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main(){
    int v[] = {1,2,3,4,5,6,7,8,9,10};
    int tam = 10;

    printf("Vetor antes de ser zerado: ");
    exibir_vetor(v, tam);
    zerar_vetor(v, tam);

    printf("Vetor após ser zerado: ");
    exibir_vetor(v, tam);
    return 0;
}