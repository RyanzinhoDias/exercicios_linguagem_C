/*5) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro …). Desconsidere empates.*/

#include <stdio.h> //biblioteca de input/output

void verifica_float(float temperatura){
    while (scanf("%f", &temperatura) != 1){
        printf("[ERRO], digite uma temperatura valida, em graus Celsius: ");
        while(getchar() != '\n');
    }
}

int main(){
    float temperaturas[12]; //vetor para armazenar média de temperatura de cada mês (jan -> dez)
    char meses[12][10] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    for (int i = 0; i < 12; i++){
        printf("Digite a media de temperatura do mês %d em graus Celsius: ", i+1);
        verifica_float(temperaturas[i]);
    }

    for (int i = 0; i < 12; i++){
        printf("%s\n", meses[i]);
    }

    return 0;
}