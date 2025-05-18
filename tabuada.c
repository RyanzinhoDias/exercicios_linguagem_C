#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int value;
    printf("Enter an integer between 1 and 10 to generate the multiplication table: ");
    
    while (scanf("%d", &value) != 1 || value < 1 || value > 10){
        printf("Invalid value, enter a value between 1 and 10:\n");
        while (getchar() != '\n');
    }
    
    for(int i = 1; i <= 10; i+=1){
        int result = value * i;
        if (i == 10) {
            printf("%d * %d = %5d\n", value, i, value * i);
        } else {
            printf("%d * %d  = %5d\n", value, i, value * i);
        }
     
    }
    
    return 0;
}
