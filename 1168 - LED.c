#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char numero[999];
    int cont=0, i, j, n;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        cont=0;
        scanf("%s", numero);
        for(j=0; j<strlen(numero); j++){
            if(numero[j] == '1'){
                cont += 2;
            }
            if(numero[j] == '2'){
                cont += 5;
            }
            if(numero[j] == '3'){
                cont += 5;
            }
            if(numero[j] == '4'){
                cont += 4;
            }
            if(numero[j] == '5'){
                cont += 5;
            }
            if(numero[j] == '6'){
                cont += 6;
            }
            if(numero[j] == '7'){
                cont += 3;
            }
            if(numero[j] == '8'){
                cont += 7;
            }
            if(numero[j] == '9'){
                cont += 6;
            }
            if(numero[j] == '0'){
                cont += 6;
            }

        }
        printf("%d leds\n", cont);
    }


  return 0;
}