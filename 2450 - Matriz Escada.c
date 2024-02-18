#include<stdio.h>
#define MAX 501
#define true 1
#define false 0

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    
    int matriz[MAX][MAX];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    int cont = 0, l_ant;
    int resp = true;
    
    for(int i=0; i<n; i++){
        l_ant = cont;
        cont = 0;
        for(int j=0; j<m; j++){
            if(matriz[i][j] == 0){
                cont++;  
            }else{
                if(l_ant==m){
                    if(cont!=l_ant){
                       resp = false; 
                    }
                }else if(i!=0 && cont<=l_ant && cont!=m){
                    resp = false;
                    break;
                }
            }
        }
        if(!resp){
            break;
        }
    }

    if(resp){
        printf("S\n");
    }else{
        printf("N\n");
    }    
    return 0;
}