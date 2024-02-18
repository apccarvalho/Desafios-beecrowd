#include <stdio.h>
#include <ctype.h>

int main (){

    int n, imp, voto, i;
    double res;
    
    while (scanf("%d", &n) != EOF){
        imp = 0;
        for (i = 0; i < n; i++){
            scanf("%d", &voto);
            if (voto == 1){
                imp++;
            }
        }
        
        res = ((double)imp / n);
        if (res >= (2.0 / 3)){
            printf("impeachment\n");
        }else{
            printf("acusacao arquivada\n");
        }
    }
    return 0;
}
