#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char word[10], one[3]="one";
    int i, j, c, igual=0;

    scanf("%d", &c);
    for(i=0; i<c; i++){
        scanf("%s", word);
        if(strlen(word)==5){
            printf("3\n");
        }
        else{
            igual=0;
            for(j=0; j<3; j++){
                if(word[j]==one[j]){
                    igual++;
                }
            }
            if(igual>1){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
        }
    }

  return 0;
}