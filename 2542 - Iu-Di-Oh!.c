#include <stdio.h>
int main() {
    
    int n, m, l, i, j, mar[100][100], leo[100][100], cm, cl, a;
    while (scanf("%d ", &n) != EOF) {
        scanf("%d %d", &m, &l);
        
        for (j = 0; j < m; j++) {
            for (i = 0; i < n; i++)
                scanf("%d", &mar[j][i]);
        }
        for (j = 0; j < l; j++) {
            for (i = 0; i < n; i++)
                scanf("%d", &leo[j][i]);
        }
        scanf("%d %d", &cm, &cl);
        scanf("%d", &a);
        cm--;
        cl--;
        a--;
        if (mar[cm][a] > leo[cl][a])
            printf("Marcos\n");
        else if (mar[cm][a] < leo[cl][a])
            printf("Leonardo\n");
        else
            printf("Empate\n");
    }

    return 0;
}