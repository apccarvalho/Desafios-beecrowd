#include <stdio.h>

int main(){

    int n, i, ingresso, posicao, ganhador, teste = 0;

    while (scanf("%d", &n) && n != 0){
        teste++;
        posicao = 0;
        ganhador = 0;
        for (i = 0; i < n; i++){
            posicao++;
            scanf("%d", &ingresso);
            if (ingresso == posicao){
                ganhador = ingresso;
            }  
        }
    printf("Teste %d\n%d\n\n", teste, ganhador);
    }

    return 0;
}