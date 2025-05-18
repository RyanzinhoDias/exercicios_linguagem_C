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