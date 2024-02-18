#include <stdio.h>

int main(){

    char comando, direcao;
    int i = 0, vezes = 1;

    while (vezes != 0){
        
        scanf("%d%*c", &vezes);
        
        if (vezes == 0){
            return 0;
        }
        
        direcao = 'N';
        
        for (i = 0; i < vezes; i++){

            scanf("%c", &comando);

            if (comando == 'E'){

                if(direcao == 'N'){
                    direcao = 'O'; 

                }else if (direcao == 'O'){
                    direcao = 'S'; 

                }else if (direcao == 'S'){
                    direcao = 'L';

                }else if (direcao == 'L'){
                    direcao = 'N';    
                }

            }  

            if (comando == 'D'){

                if (direcao == 'N' ){
                    direcao = 'L';

                }else if (direcao == 'L'){
                    direcao = 'S';

                }else if (direcao == 'S'){
                    direcao = 'O';

                }else if (direcao == 'O'){
                    direcao = 'N';
                }
            }
        }
        printf("%c\n", direcao);
    }

    return 0;
}