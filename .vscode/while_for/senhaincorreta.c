/*2) Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura
de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for
informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser
encerrado. Considere que a senha correta é o valor 123456.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int senha;
    int tentativas = 3;

    
    while (tentativas > 0){
        printf("\nEnter your password: ");
        if ((scanf("%d", &senha) == 1 && senha == 123456)){
            printf("Access allowed\n");
            return 0;
        }
        tentativas--;
        printf("---------ERROR----------\n");
        printf("Remaining attempts %d.\n", tentativas);
        printf("---------ERROR----------\n");
        while (getchar() != '\n'); 
    } 
    
    printf("Too many failed attempts. Access blocked.\n");
    return 0;
}