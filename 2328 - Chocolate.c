#include <stdio.h>

int main(){

    int i, n, p, estoque = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &p);
        estoque += p;
    }
    
    printf("%d\n", estoque-n);

    return 0;
}    
