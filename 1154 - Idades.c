#include <stdio.h>

    int main(){
    int cont = 0, idade, somaIdades = 0;
    double media = 0;

    while (scanf("%d", &idade), idade >= 0){
        cont++;
        somaIdades += idade;
    }

    media = (double)somaIdades/cont;
    printf("%.2lf\n", media);

    return 0;
}