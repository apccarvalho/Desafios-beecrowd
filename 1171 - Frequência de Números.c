#include <stdio.h>

int main(){

    int i, j, troca, n, cont;
    scanf("%d", &n);

    int numeros[n];

    for (i = 0; i < n; i++){
        scanf("%d", &numeros[i]);
    }
    
    for (i = 0; i < n; i++){
        for (j = i; j < n; j++){
            if (numeros[i] > numeros[j]){
                troca = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = troca;
            }
        }
    }

    for (i = 0; i < n; i++){
        cont = 0;
        if (numeros[i] != numeros [i-1]){

            for (j = i; j < n; j++){
                if (numeros[i] == numeros [j]){
                    cont++;
                }
            }
        printf("%d aparece %d vez(es)\n", numeros[i], cont);
        }
    }
    return 0;
}
