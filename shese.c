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
        // инициализация генератора случайных чисел
        srand(time(NULL));
        // реализация алгоритма перестановки
        for (int k = 1000; k > 1; k--)
        {
            int ran = rand() % (N + 0);
            if (arr[ran] >  arr[ran + 1])
            {
                int var = arr[ran + 1];
                arr[ran + 1] =  arr[ran];
                arr[ran] = var;
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
    int i;
    for (i = 0; i < n; i++)
        printf("%4d ", A[i]);
    shuffle(A, n);
    printf("\n");
    for (i = 0; i < n; i++)
        printf("%4d ", A[i]);
    return 0;
}
