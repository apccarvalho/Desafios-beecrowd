#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	double M[12][12], acc = 0;
	int i, j, cont = 0, lim_col = 10;
	char oper;

	scanf("%c", &oper);

	for(i = 0; i < 12; i++){
		for(j = 0; j < 12; j++){
				scanf("%lf", &M[i][j]);
        }        
    }
 	for(i = 0; i < 11; i++){
		for(j = 0; j <= lim_col; j++){
			acc = acc + M[i][j];
			cont++;
		}
		lim_col = lim_col - 1;
 	}

	if (oper == 'M'){
    	acc = acc / cont;
    	printf("%.1lf\n", acc);
	}

    if (oper == 'S'){
    	printf("%.1lf\n", acc);
    }

	return 0;
}