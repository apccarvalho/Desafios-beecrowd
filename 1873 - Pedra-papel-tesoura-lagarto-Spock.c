#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    int n, i;
    char raj[10], shel[10];
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++){
        
        scanf("%s %s", raj, shel);
       
        if (strcmp(raj, shel) == 0){
            printf("empate\n");
        }else if (strcmp(raj, "papel") == 0){
                    if (strcmp(shel, "pedra") == 0 || strcmp(shel, "spock") == 0){
                        printf("rajesh\n");
                    }else{
                        printf("sheldon\n");
                    }
        }else if (strcmp(raj, "pedra") == 0){
                    if (strcmp(shel, "tesoura") == 0 || strcmp(shel, "lagarto") == 0){
                        printf("rajesh\n");
                    }else{
                        printf("sheldon\n");
                    }
        }else if (strcmp(raj, "tesoura") == 0){
                    if (strcmp(shel, "papel") == 0 || strcmp(shel, "lagarto") == 0){
                        printf("rajesh\n");
                    }else{
                        printf("sheldon\n");
                    }
        }else if (strcmp(raj, "lagarto") == 0){
                    if (strcmp(shel, "papel") == 0 || strcmp(shel, "spock") == 0){
                        printf("rajesh\n");
                    }else{
                        printf("sheldon\n");
                    }
        }else if (strcmp(raj, "spock") == 0){
                    if (strcmp(shel, "pedra") == 0 || strcmp(shel, "tesoura") == 0){
                        printf("rajesh\n");
                    }else{
                        printf("sheldon\n");
                    }
        }
    }

    return 0;
}
