#include <stdio.h>

int main(){

    double mat[12][12];
    double soma;
    int i, j, cont = 0, aux = 1, aux2 = 5;
    char oper;

    scanf("%c", &oper);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &mat[i][j]);
        }
    }

    for (i = 1; i < 11; i++){
        if (i <= 5){
            for (j = 11; j >= 12 - aux; j--){
                soma += mat[i][j];
                cont++;
            }
            aux++;
        }else{
            for (j = 11; j >= 12 - aux2; j--){
                soma += mat[i][j];
                cont++;
            }            
            aux2--;
        }   
    }
    if (oper == 'S'){
        printf("%.1lf\n", soma);
    }

    if (oper == 'M'){
        soma = soma / cont;
        printf("%.1lf", soma);
    }
    return 0;
}