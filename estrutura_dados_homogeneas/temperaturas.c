/*5) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro …). Desconsidere empates.*/

#include <stdio.h> //biblioteca de input/output

int t = 0; // variável global para auxiliar na verificação de maior e menor temperatura

float verifica_float(float temperatura){
    while (scanf("%f", &temperatura) != 1){
        printf("[ERRO], digite uma temperatura valida, em graus Celsius: ");
        while(getchar() != '\n');
    }
    return temperatura;
}

float verifica_maior(float atual){
    float maior;
    if (t == 0){
        maior = atual;
        t++;
    } else {
        if (atual > maior){ 
            maior = atual;
        }
    }
    return maior;
}

float verifica_menor(float atual){
    float menor;
    if(t == 1){
        menor = atual;
        t++;
    } else {
        if (atual < menor){
            menor = atual;
        }
    }
    return menor;
}

//programa principal
int main(){
    float temp, maior, menor;
    float temperaturas[12]; //float* temperaturas[12]; //vetor para armazenar média de temperatura de cada mês (jan -> dez)
    char meses[12][10] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    
    //loop para receber as temperaturas
    for (int i = 0; i < 12; i++){
        printf("Digite a media de temperatura do mês %d em graus Celsius: ", i+1);
        temperaturas[i] = verifica_float(temp);
    }
    
    //loop para percorrer o vetor e encontrar a maior posição
    for (int i = 0; i < 12; i++){
        maior = verifica_maior(temperaturas[i]);
    }

    //loop para percorrer o vetor e encontrar a menor posição
    for (int i = 0; i < 12; i++){
        menor = verifica_menor(temperaturas[i]);
    }
    
    //Impressões abaixo
    printf("\nMaior Temperatura: %.2f | Mes: ", maior);
    
    for(int i = 0; i < 12; i++){
        if(temperaturas[i] == maior)
            printf("%s ", meses[i]);
    }
    
    printf("\nMenor temperatura: %.2f | Mes: \n", menor);
    
    for(int i = 0; i < 12; i++){
        if(temperaturas[i] == menor)
            printf("%s ", meses[i]);
    }

    return 0;
}