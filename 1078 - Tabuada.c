#include <stdio.h>

int main(){

    int n, i, res;
    scanf("%d", &n);
    for (i = 1; i < 11; i++){
        res = i * n;
        printf("%d x %d = %d\n", i, n, res);
    }
    return 0;
}