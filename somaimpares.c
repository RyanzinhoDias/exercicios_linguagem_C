#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int start, final;
    int sum = 0;
    
    printf("### Sum of odd values, choose sum range ###\n");
    
    printf("Enter an integer value start: ");
    while (scanf("%d", &start) != 1){
        printf("Incorrect value, enter an integer value: ");
        while (getchar() != '\n');
    }
    
    printf("Enter a final integer value: ");
    while (scanf("%d", &final) != 1){
        printf("Incorrect value, enter an integer value: ");
        while (getchar() != '\n');
    }

    while (final <= start){
        printf("\nValue less than or equal to the initial value, enter a larger value for the calculation: ");
        scanf("%d", &final);
    }
    
    for (int i = start; i <= final; i++){
        if ((i % 2) != 0){
            sum += i;
        }
    }
    
    printf("\n\nResult: %d\n\n", sum);

    return 0;
}