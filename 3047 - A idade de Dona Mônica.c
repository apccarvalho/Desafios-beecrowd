#include <stdio.h>

int main(){

    int m, a, b, c, mais_velho;

    scanf("%d %d %d", &m, &a, &b);

    c = m - (a + b);

    if (a > b && a > c){
        mais_velho = a;
    }else if (b > a && b > c){
        mais_velho = b;
    }else{
        mais_velho = c;
    }

    printf("%d\n", mais_velho);

    return 0;
}