#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){

    int n, i, j;
    char mensagem [100];
    scanf("%d", &n);

    for (i = 0; i < n; i++){
      scanf("%s", mensagem);
      for (j = strlen(mensagem); j >= 0; j--){
        if (islower(mensagem[j])){
          printf("%c", mensagem[j]);
        }
      }
      printf("\n");
    }

  return 0;
}