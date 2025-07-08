/*Peça ao usuário para digitar o nome de 5 pessoas. Armazene essas strings em um vetor. Em seguida, 
use o Selection Sort para ordenar os nomes em ordem alfabética.*/

#include <stdio.h>
#include <string.h>

void ordenar_string(char nomes[][10]){
    int i, j, resul;
    char aux[10];
    
    for (i = 0; i < 5; i++){
        for (j = i+1; j < 5; j++){
            resul = strcmp(nomes[i], nomes[j]);
    
            if(resul > 0){
                strcpy(aux, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
        
    }
}

int main(){
    char nomes[5][10];
    
    for (int i = 0; i < 5; i++){
        printf("Digite os nomes para ordenação: ");
        scanf("%s", nomes[i]);
    }

    printf("\n");

    printf("Antes da ordenação: ");
    for(int i = 0; i < 5; i++){
        printf("%s ", nomes[i]);
    }
    printf("\n\n");

    ordenar_string(nomes);
    
    printf("Após a ordenação: ");
    for(int i = 0; i < 5; i++){
        printf("%s ", nomes[i]);
    }
    printf("\n\n");

    return 0;
}