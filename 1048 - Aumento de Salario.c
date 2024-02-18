#include <stdio.h>

int main(){

    double salario, nSalario, reajuste, percentual;
    scanf("%lf", &salario);
    if (salario <= 400.00){
        percentual = 15;
        reajuste = (salario / 100) * percentual;
        nSalario = reajuste + salario;
    }else if (salario <= 800.00){
        percentual = 12;
        reajuste = (salario / 100) * percentual;
        nSalario = reajuste + salario;
    }else if (salario <= 1200.00){
        percentual = 10;
        reajuste = (salario / 100) * percentual;
        nSalario = reajuste + salario;
    }else if (salario <= 2000.00){
        percentual = 7;
        reajuste = (salario / 100) * percentual;
        nSalario = reajuste + salario;  
    }else if (salario >= 2000.01){
        percentual = 4;
        reajuste = (salario / 100) * percentual;
        nSalario = reajuste + salario;    
    }

    printf("Novo salario: %.2lf\n", nSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", (int) percentual);
    
    return 0;
}