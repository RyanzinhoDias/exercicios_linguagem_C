/*DESAFIO: Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O
monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com
grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o
primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro
anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    unsigned long long acumulador = 1;
    
    for(int i = 1; i <= 64; i++){
        if (i == 64){
            acumulador = (acumulador * 2) - 1;
        } else {
            acumulador *= 2;
        }
        
    }
    
    printf("Total de grãos: %llu\n", acumulador);
    return 0;
}