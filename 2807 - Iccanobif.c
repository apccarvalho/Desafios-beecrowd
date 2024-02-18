#include <stdio.h>

int main(){

    int vetor[42];
    int n, i;

    scanf("%d", &n);
    vetor[0] = 1;
    vetor[1] = 1;
    for (i = 2; i <= n; i++){
        vetor[i] = vetor [i-1] + vetor [i-2];
    }
    for (i = n-1; i >= 0; i--){
        printf("%d", vetor[i]);
        if (i != 0){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}