#include <stdio.h>

int main(){

    int cod01, cod02, numPecas01, numPecas02;
    double valor01, valor02, valorTotal01, valorTotal02, valorApagar;
   
    scanf("%d %d %lf\n", &cod01, &numPecas01, &valor01);
    scanf("%d %d %lf", &cod02, &numPecas02, &valor02); 
    
    valorTotal01 = numPecas01 * valor01;
    valorTotal02 = numPecas02 * valor02;
    valorApagar = valorTotal01 + valorTotal02;
    
    printf("VALOR A PAGAR: R$ %.2lf\n", valorApagar);   


return 0;    
}