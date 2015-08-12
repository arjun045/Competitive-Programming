#include<stdio.h>

int main(){
    int T, n, m, a, b, xi, c[25][25], i, j, p, q;
    scanf("%d",&T);
    while (T--){
        scanf("%d %d", &m, &n);
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &c[i][j]);

        scanf("%d %d", &a, &b);
        int max = 0, sum = 0;
        for (i = 0; i < m - a + 1; i++){
            for (j = 0; j < n - b + 1; j++){
                sum = 0;
                for (p = i; p < i+a; p++){
                    for (q = j; q < j+b; q++){
                        sum = sum + c[p][q];
                    }
                }
                
                if (sum > max)
                    max = sum;
            }
        }
        for (i = 0; i < m - b + 1; i++){
            for (j = 0; j < n - a + 1; j++){
                sum = 0;
                for (p = i; p < i+b; p++){
                    for (q = j; q < j+a; q++){
                        sum = sum + c[p][q];
                    }
                }
                
                if (sum > max)
                    max = sum;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
