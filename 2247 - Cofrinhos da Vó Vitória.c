#include <stdio.h>

int main(){

    int n, j, z, i, saldo, teste;

    teste = 0;
    while (scanf("%d", &n) && n !=0){
        saldo = 0;
        teste++;
        printf("Teste %d\n", teste);
        for (i = 0; i < n; i++){
            scanf("%d %d", &j , &z);
                saldo += j;
                saldo -= z;
            printf("%d\n", saldo);    
            }
        printf("\n");    
        }
    return 0;
}