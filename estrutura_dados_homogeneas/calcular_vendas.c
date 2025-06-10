/*4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
empatados).*/

#include <stdio.h>
//#include <stdlib.h>

int main(){
    //criando vetores
    int qtd_vendida[10]; 
    float valor_produtos[10], valor_total;

    printf("--- Digite valor unitario e a quantidade vendida de cada produto ---\n");
    for(int i = 0; i < 10; i++){
        printf("VALOR UNITARIO PRODUTO %d: R$ ", i+1);
        // controle de inserção de valores dentro dos reais (float)
        while(scanf("%f", &valor_produtos[i]) !=1){ 
            printf("Digite um valor dentro dos REAIS: ");
            while(getchar() != '\n');
        }

        printf("QUANTIDADE VENDIDA PRODUTO %d: ", i+1);
        while(scanf("%d", &qtd_vendida[i]) != 1){
            printf("ERRO: Digite um valor do tipo INTEIRO: ");
            while(getchar() != '\n');
        }
        
        valor_total += valor_produtos[i]; 
 
    }
    
    printf("\n          QUANTIDADE VENDIDA ----- VALOR UNITARIO ----- VALOR TOTAL\n");
    for(int p = 0; p < 10; p++){
        printf("Produto %d\n", p);
    }

    printf("\nTotal vendido: %.2f\n", valor_total);

    return 0;
}