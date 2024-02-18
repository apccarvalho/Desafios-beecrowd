#include <stdio.h>

int main (){

    double nota1, nota2, media;

    nota1 = 11;
    nota2 = 11;

    
    while(nota1 < 0 || nota1 > 10){
        scanf("%lf", &nota1);
        if (nota1 < 0 || nota1 > 10){
            printf("nota invalida\n");
        }
    }

    while(nota2 < 0 || nota2 > 10){
        scanf("%lf", &nota2);
        if (nota2 < 0 || nota2 > 10){
            printf("nota invalida\n");
        }        
    }

    media = (nota1 + nota2)/2;
    printf("media = %.2lf\n", media);

    return 0;
}