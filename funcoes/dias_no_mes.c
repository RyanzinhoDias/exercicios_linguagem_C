/*4. Dias do mês: Crie uma função chamada dias_no_mes(int mes) que, dado o número de um mês (1 a 12), 
retorne a quantidade de dias que ele possui (sem considerar anos bissextos).*/

#include <stdio.h>

int dia_no_mes(int qtd_dias){
    int dias_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return dias_mes[qtd_dias+1];
}

int main(){
    printf("\nPossui %d dias\n", dia_no_mes(4));
    return 0;
}