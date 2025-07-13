/*que recebe um vetor e devolve o ponteiro para o maior valor. No main, use esse endereço para imprimir o 
valor máximo*/
#include <stdio.h>

int verifica_inteiro(int valor){
    while (scanf("%d", &valor) != 1){
        printf("!!! ERRO !!! Digite um valor inteiro válido: ");
        while(getchar() != '\n');
    }
    return valor;
}


int *maior_elemento(int *v, int n){
    int maior = 0, c = 0;

    for (int i = 0; i < n; i++){
        if(v[i] > maior){
            maior = v[i];
            c = i;
        }
    }

    return &v[c];
}

int main(){
    int tamanho, entrada;
    
    printf("Digite o tamanho do VETOR: ");
    tamanho = verifica_inteiro(tamanho);
    int vetor[tamanho];
    
    for(int i = 0; i < tamanho; i++){
        printf("Posição: %d: ", i);
        entrada = verifica_inteiro(entrada);
        vetor[i] = entrada;
    }

    int *n = maior_elemento(vetor, tamanho);
    
    printf("Maior valor: %d", *n);

    printf("\n");

    return 0;
}