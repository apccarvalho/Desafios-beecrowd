#include <stdio.h>


int main()
{
    int n, cont = 1;
    while(scanf("%d", &n), n != 0){
        
        int maior = 0, c[n+1], m[n+1], cod_maior[n+1];
        
        for(int i=0; i<n; i++){
            scanf("%d %d", &c[i], &m[i]);

            if(m[i]>maior){
             maior = m[i];
            }
        }
        int j = 0;
        for(int i=0; i<n; i++){
            if(m[i] == maior){
                cod_maior[j] = c[i];
                j++;
            }
        }

        printf("Turma %d\n", cont);

        for(int i=0; i<j; i++){
            printf("%d ", cod_maior[i]);
        }
        printf("\n\n");
        
        cont++;
    }

    return 0;
}