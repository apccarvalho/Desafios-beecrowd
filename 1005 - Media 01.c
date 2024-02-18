#include <stdio.h>

int main (){
    double a, b, pA, pB, media;
    pA = 3.5;
    pB = 7.5;
    scanf("%lf %lf", &a, &b);
    media = (a * pA + b * pB) / 11;
    printf("MEDIA = %.5lf\n", media);

    
return 0;
}