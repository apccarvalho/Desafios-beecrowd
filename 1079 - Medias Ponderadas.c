#include <stdio.h>
#define PESO1 2
#define PESO2 3
#define PESO3 5

int main (){

    int n,i;
    double valor1, valor2, valor3, media;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%lf %lf %lf", &valor1, &valor2, &valor3);
        media = ((valor1 * PESO1 + valor2 * PESO2 + valor3 * PESO3)/(PESO1 + PESO2 + PESO3));
        printf("%.1lf\n", media);
    }
    
    return 0;
}