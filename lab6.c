#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill (int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 19 - 9;


        for (int i = n - 1; i >= 1; i--)
        {
            int p = rand() % (i + 1);

            int tmp = a[p];
            a[p] = a[i];
            a[i] = tmp;
        }
}

int main()
{
    srand(time(NULL));
    int n;
    printf("n -> ");
    scanf("%d", &n);
    int A[n];
    fill(n, A);
    int i;
    for (i = 0; i < n; i++)
        printf("%4d ", A[i]);
    return 0;
}
