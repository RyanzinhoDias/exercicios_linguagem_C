#include <stdio.h>
#include <stdlib.h>

int main (int argv, char *argc[]){
    int quantidade_funcionários;
    float salario_individual, maior = 0, menor = 0, media = 0, total = 0;

    printf("Digite a quantidade de funcionarios da empresa: ");
    while (scanf("%d", &quantidade_funcionários) != 1 || quantidade_funcionários < 1){
        printf("INVÁLIDO: Digite um valor inteiro: ");
        while(getchar() != '\n');
    }

    for(int i = 1; i <= quantidade_funcionários; i++){

        printf("Digite o salario do funcionario [%d]: ", i);
        while ((scanf("%f", &salario_individual) != 1)){
            printf("INVALIDO: Digite um valor real: ");
            while (getchar() != '\n');            
        }
        
        if (i == 1){
            menor = salario_individual;
            maior = salario_individual;
        } else {
            if (salario_individual > maior){
                maior = salario_individual;
            } else if (salario_individual < menor){
                menor = salario_individual;
            }
        }
        
        total += salario_individual;
    }
    
    media = total / quantidade_funcionários;

    printf("\nMedia salarial da empresa: >>> %.2f <<<\nMaior Salário: >>> %.2f <<<\nMenor Salário: >>> %.2f <<<\n", media, maior, menor);

    return 0;
}