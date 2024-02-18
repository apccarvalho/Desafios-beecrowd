#include <stdio.h>


int main(){
    
    int dia1 = 0, dia2 = 0;

    scanf("%d %d", &dia1, &dia2);

    if(dia1 > dia2 || dia1 == dia2){

        if(dia2 >= 97){
            printf("cheia\n");

        } else if(dia2 >= 3 && dia2 <= 96){
            printf("minguante\n");

        } else if(dia2 <= 2){
            printf("nova\n");

        }
    
    } else {
        
        if(dia2 <= 2){
            printf("nova\n");

        } else if(dia2 <= 96){
            printf("crescente\n");

        } else if(dia2 <= 100){
            printf("cheia\n");

        }

    }
    return 0;
}