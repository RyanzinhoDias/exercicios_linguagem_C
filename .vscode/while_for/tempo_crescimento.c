/*22) Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3
centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários
para que Zé seja maior que Chico.*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    float chico = 1.50, ze = 1.10;
    int ano;

    while (chico >= ze){
        chico += 0.02;
        ze += 0.03;

        ano++;
    }
    
    printf("Sao necessarios %d anos, para Ze ficar maior que Chico.\n", ano);
    return 0;
    }