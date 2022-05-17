#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill (int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 19 - 9;
}
void shuffle(int* arr, int N)
{
    srand(time(NULL));
    int num = 0;
    for (int k = 50; k > 1; k--)
    {
        int ran = rand() % (N + 0);
        if (arr[ran] >  arr[ran + 1])
        {
            int var = arr[ran + 1];
            arr[ran + 1] =  arr[ran];
            arr[ran] = var;
            num = num + 1;
        }
        /*int i;
        for (i = 0; i < N; i++)
            printf("%4d ", arr[i]);
        printf("\n");*/
    }
    printf("Zamen = %d \n", num);
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
    printf("\n");
    shuffle(A, n);
    printf("\n");
    for (i = 0; i < n; i++)
        printf("%4d ", A[i]);
    return 0;
}
