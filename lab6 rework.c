#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill (int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 19 - 9;
}

void change (int n, int a[])
{
    for(int i = 0; i < 10000; i++)
    {
        if (a > a+1)
        {
            int l;
            l = a[1];
            a[0] = l;
        }
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
    change(n, A);
    int i;
    for (i = 0; i < n; i++)
        printf("%4d ", A[i]);
    return 0;
}
