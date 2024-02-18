#include <stdio.h>

int main (){
   
    double valorEntrada;
    int moedas, resto, dinheiro, nota100, nota50, nota20, nota10, nota5, nota2;
    int umReal, cinquentaC, vinteCincoC, dezC, cincoC, umCentavo;
    scanf("%lf", &valorEntrada);
    dinheiro = (int) valorEntrada;
    nota100 = dinheiro / 100;
    resto = dinheiro % 100;
    nota50 = resto / 50;
    resto = resto % 50;
    nota20 = resto / 20;
    resto = resto % 20;
    nota10 = resto / 10;
    resto = resto % 10;
    nota5 = resto / 5;
    resto = resto % 5;
    nota2 = resto / 2;
    resto = resto % 2;
    umReal = resto / 1;
    
    moedas = (valorEntrada - dinheiro) * 100;
    cinquentaC = moedas / 50;
    resto = moedas % 50;
    vinteCincoC = resto / 25;
    resto = resto % 25;
    dezC = resto / 10;
    resto = resto % 10;
    cincoC = resto / 5;
    resto = resto % 5;
    umCentavo = resto / 1;

    printf("NOTAS:\n"); 
    printf("%d nota(s) de R$ 100.00\n", nota100); 
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", umReal); 
    printf("%d moeda(s) de R$ 0.50\n", cinquentaC);
    printf("%d moeda(s) de R$ 0.25\n", vinteCincoC);
    printf("%d moeda(s) de R$ 0.10\n", dezC);
    printf("%d moeda(s) de R$ 0.05\n", cincoC);
    printf("%d moeda(s) de R$ 0.01\n", umCentavo);    

    return 0;
}

