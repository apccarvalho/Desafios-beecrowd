#include <stdio.h>

int main (){

    int alcool = 0, gasolina = 0, diesel = 0, fim = 0;

    do{
        scanf("%d", &fim);

        switch (fim){
            
            case 1 :
            alcool++;
            break;

            case 2 :
            gasolina++;
            break;

            case 3 :
            diesel++;
            break;
        }
    }while (fim != 4); 

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);

    return 0;
}