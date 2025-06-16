/*5) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro …). Desconsidere empates.*/

#include <stdio.h> //biblioteca de input/output

int main(){
    float temperaturas[12]; //vetor para armazenar média de temperatura de cada mês (jan -> dez)

    for (int i = 0; i < 12; i++){
        printf("Digite a media de temperatura do mês %d em graus Celsius: ", i+1);
        //verificação se tipo de entrada é valida
        while (scanf("%f", &temperaturas[i]) != 1){
            printf("[ERRO], digite uma temperatura valida, em graus Celsius: ");
            while(getchar() != '\n');
        }
        
    }

    return 0;
}