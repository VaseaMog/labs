#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int m, int n, int a[m][n])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 10;
}

void trans(int m, int n, int a[m][n], int b[n][m])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            b[i][j] = a[j][i];
}

void mult(int m, int n, int a[m][n], int b[n][m], int c[n][n])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for(int k = 0; k < m; k++)
                c[i][j] += b[i][k] * a[k][j];
        }
}

void pr(int m, int n, int a[][n])
{
    for (int i = 0; i < m; i++, putchar('\n'))
        for (int j = 0; j < n; j++)
            printf("%6d ", a[i][j]);
}

int main() {
    srand(time(NULL));
    int m, n;
    printf("m -> ");
    scanf("%d", &m);
    printf("n -> ");
    scanf("%d", &n);
    int a[m][n], b[n][m], c[n][n];
    fill(m, n, a);
    trans(m, n, a, b);
    mult(m, n, a, b, c);
    printf("A: \n");
    pr(m, n, a);
    printf("B: \n");
    pr(n, m, b);
    printf("C: \n");
    pr(n, n, c);
    return 0;
}
