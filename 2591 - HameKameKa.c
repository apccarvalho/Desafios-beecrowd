#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char hame[200], k, a;
    int c, i, j, m, contk=0, cont1=0, cont2=0;;

    scanf("%d", &c);


    for (i=0; i<c; i++){
        contk=0, cont1=0, cont2=0;
        scanf("%s", hame);
        for(j=0; j<strlen(hame); j++){
            if(hame[j]=='k'){
                contk=1;
            }
            if (contk<1){
                if(hame[j]=='a'){
                    cont1++;
                }
            }
            else{
                if(hame[j]=='a'){
                    cont2++;
                }
            }
        }
        printf("k");
        for(m=0; m<cont1*cont2; m++){
            printf("a");
        }
        printf("\n");
    }


  return 0;
}