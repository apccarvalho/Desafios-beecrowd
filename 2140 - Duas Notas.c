#include <stdio.h>


int main()
{
    int compra, pago, troco;
    while(scanf("%d %d", &compra, &pago), compra && pago !=0)
    {
        
        troco = pago - compra;
        int cont=0;
        while(troco>=100)
        {
            troco -= 100;
            cont++;
        }
        while(troco>=50)
        {
            troco -= 50;
            cont++;
        }
        while(troco>=20)
        {
            troco -= 20;
            cont++;
        }
        while(troco>=10)
        {
            troco -= 10;
            cont++;
        }
        while(troco>=5)
        {
            troco -= 5;
            cont++;
        }
        while(troco>=2)
        {
            troco -= 2;
            cont++;
        }

        if(cont == 2){
            printf("possible\n");

        }else{
            printf("impossible\n");
        }
    }

    return 0; 
}