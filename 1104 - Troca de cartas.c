#include <stdio.h>
#define MAX 100001

int main(){

    int ca, cb, num_carta, i;

    while (scanf("%d %d", &ca, &cb) && ca + cb > 0){

        int a[MAX], b[MAX];

        for (i = 0; i < MAX; i++){
            a[i] = 0;
            b[i] = 0;
        }

        for (i = 0; i < ca; i++){
            scanf("%d", &num_carta);
            a[num_carta]++;
        }

        for (i = 0; i < cb; i++){
            scanf("%d", &num_carta);
            b[num_carta]++;
        }

        /*for (i = 0; i <= 15; i++) {
            printf("%2d ", a[i]);
        }
        printf("\n");

        for (i = 0; i <= 15; i++) {
            printf("%2d ", b[i]);
        }
        printf("\n");*/

        int cont_alice = 0, cont_beatriz = 0;

        for (i = 0; i < MAX; i++){
            if (a[i] > 0 && b[i] == 0){
                cont_alice++;
            }

            if (b[i] > 0 && a[i] == 0){
                cont_beatriz++;
            }
        } 

        if (cont_alice < cont_beatriz){
            printf("%d\n", cont_alice);
        }else{
            printf("%d\n", cont_beatriz);
        }   

    }

    return 0;
}