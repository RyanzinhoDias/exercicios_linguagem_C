/*Receba o endereço de um Funcionario e aumente o salário pelo percentual informado. No main, leia dados de 3 funcionários, 
aplique reajustes diferentes chamando a função e depois exiba a lista atualizada.*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float salario;
} Funcionario;

void reajuste(Funcionario *funcionario, float porcentagem){
        funcionario->salario += funcionario->salario * (porcentagem/100);
}

int main(){
    Funcionario funcionario1;
    Funcionario funcionario2;
    Funcionario funcionario3;

    strcpy(funcionario1.nome, "Jorge");
    funcionario1.salario = 1600;

    strcpy(funcionario2.nome, "Marcos");
    funcionario2.salario = 2000;

    strcpy(funcionario3.nome, "Daniel");
    funcionario3.salario = 1800;
    
    printf("---Antes do reajuste---\n");
    printf("%s || %.2f\n", funcionario1.nome, funcionario1.salario);
    printf("%s || %.2f\n", funcionario2.nome, funcionario2.salario);
    printf("%s || %.2f\n", funcionario3.nome, funcionario3.salario);

    reajuste(&funcionario1, 10);
    reajuste(&funcionario2, 5.5);
    reajuste(&funcionario3, 8.75);

    printf("\n---Após o reajuste---\n");
    printf("%s || %.2f\n", funcionario1.nome, funcionario1.salario);
    printf("%s || %.2f\n", funcionario2.nome, funcionario2.salario);
    printf("%s || %.2f\n", funcionario3.nome, funcionario3.salario);
    
    return 0;
}