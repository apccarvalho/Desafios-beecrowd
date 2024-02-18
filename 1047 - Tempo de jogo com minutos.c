#include <stdio.h>

int main (){

    int horaI, minutoI, horaF, minutoF, instanteI, instanteF;
    int duracao, duracaoH, duracaoM;
    scanf("%d %d %d %d", &horaI, &minutoI, &horaF, &minutoF);

    instanteI = (horaI * 60) + minutoI;
    instanteF = (horaF * 60) + minutoF;

    if (instanteI < instanteF){
        duracao = instanteF - instanteI;
    } else{
        duracao = (24 * 60 - instanteI) + instanteF;
    }

    duracaoH = duracao / 60;
    duracaoM = duracao % 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoH, duracaoM);
    return 0;
}
