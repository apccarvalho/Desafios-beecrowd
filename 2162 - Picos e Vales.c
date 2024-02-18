#include <stdio.h>


int main(){

    int i, n, padrao;

    scanf("%d", &n);
    int altura[n];

    for (i = 0; i < n; i++){
        scanf("%d", &altura[i]);
    }
  
        for (i = 0; i < n; i++){
            if (altura[i+1] > altura[i]){
                padrao = 1;
            }else{
                padrao = 0;
                printf("%d\n", padrao);
                return 0;
            } 
        }
    }

    if (altura[1] > altura[2]){
        for (i = 0; i < n; i++){
            if (altura[i] < altura[i+1]){
                padrao = 1;
            }else{
                padrao = 0;
                printf("%d\n", padrao);
                return 0;
            }
        }
    }
    
    printf("%d\n", padrao);
        

    

    return 0;
}