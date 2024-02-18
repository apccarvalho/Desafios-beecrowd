#include <stdio.h>

int main()
{
	double M[12][12];
	char O[2];
	double soma = 0.0;
	int aux1 = 11;
	int aux2 = 1;
	int i, j;
	int cont = 0;
	
	scanf("%s",O);
	
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			scanf("%lf",&M[i][j]);
		}
	}
	
	for(i=11; i>6; i--)
	{
		for(j=aux2; j<aux1;j++)
		{
			soma += M[i][j];
			cont += 1;
		}
		aux1 -= 1;
		aux2 += 1;
	}
	if(O[0] == 'S')
	{
		printf("%.1lf\n",soma);
	}else{
		printf("%.1lf\n",(soma/cont));
	}
	
}