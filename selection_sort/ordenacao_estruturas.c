/*Crie uma struct Pessoa com os campos nome (string) e idade (int). Peça os dados de 5 pessoas e 
ordene o vetor de pessoas por idade crescente, usando Selection Sort.*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
} Pessoa;

int verifica_idade(int idade){
    while (scanf("%d", &idade) != 1){
        printf("!!! ERRO !!! Digite um valor inteiro válido: ");
        while(getchar() != '\n');
    }
    return idade;
}

void ordenar(Pessoa pessoa[]){
    for (int i = 0; i < 5; i++){
        int menor_indice = i;
        
        for (int j = i; j < 5; j++){
            if (pessoa[i].idade > pessoa[j].idade){
                menor_indice = j;
            }
        }
        
        if (pessoa[i].idade > pessoa[menor_indice].idade){
            c++;
            Pessoa auxiliar = pessoa[i];
            pessoa[i] = pessoa[menor_indice];
            pessoa[menor_indice] = auxiliar;
        }
    }
    
    printf("\n");

}

void exibir(Pessoa lista[]){
    for (int i = 0; i < 5; i++){
        printf("%s - %d\n", lista[i].nome, lista[i].idade);
    }
}

int main(){
    Pessoa pessoa[5];

    for (int i = 0; i < 5; i++){
        printf("Digite o nome: ");
        fgets(pessoa[i].nome, 50, stdin);
        pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0'; //retira o \n da entrada.

        printf("Digite a idade: ");
        pessoa[i].idade = verifica_idade(pessoa[i].idade);
        getchar();
    }

    printf("-- Antes da ordenação --\n ");
    exibir(pessoa);

    ordenar(pessoa);

    printf("-- Após a ordenação --\n");
    exibir(pessoa);
    
    return 0;
}