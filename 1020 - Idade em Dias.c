#include <stdio.h>

int main() {
    
    int idade, ano, mes, dias, resto;
    scanf("%d", &idade);
    ano = idade / 365;
    resto = idade % 365;
    mes = resto / 30;
    resto = resto % 30;
    dias = resto;
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);

    return 0;
}