/*Peça ao usuário o tamanho n e os n números de um vetor de int. Crie um procedimento dobrar(int *v, int n) que percorra o vetor 
via aritmética de ponteiros e dobre cada elemento “in‑place”. Mostre o vetor antes e depois da chamada.*/

#include <stdio.h>

int verifica_inteiro(int valor){
    while (scanf("%d", &valor) != 1){
        printf("!!! ERRO !!! Digite um valor inteiro válido: ");
        while(getchar() != '\n');
    }
    return valor;
}

void dobrar(int *vetor, int tamanho){
    for (int i = 0; i < tamanho; i++){
        *(vetor + i) *= 2;        
    }
}

void imprimir(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("%d ", *(vetor+i));
    }
    printf("\n");
}


int main(){
    int tamanho, entrada;
    int vetor[tamanho];

    printf("Digite o tamanho do VETOR: ");
    tamanho = verifica_inteiro(tamanho);
    
    for(int i = 0; i < tamanho; i++){
        printf("Posição: %d: ", i);
        entrada = verifica_inteiro(entrada);
        vetor[i] = entrada;
    }

    printf("Valores digitados: ");
    imprimir(vetor, tamanho);

    dobrar(vetor, tamanho);

    printf("Valores dobrados: ");
    imprimir(vetor, tamanho);

    return 0;
}