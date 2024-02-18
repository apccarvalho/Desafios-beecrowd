#include <stdio.h>

int main(){

    int A, B, cont1, cont2, N, i;

    while (scanf("%d", &N) && N != 0){
        cont1 = 0;
        cont2 = 0;
        for (i = 0; i < N; i++){
            scanf("%d %d", &A, &B);
            if (A < B){
                cont2++;
            }else if (A > B){
                cont1++;
            }
        }
        printf("%d %d\n", cont1, cont2);
    }
    
    return 0;
}