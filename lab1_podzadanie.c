#include <math.h>
#include <stdio.h>
int main()
{
    int a, b, c, x, m;
    printf("Enter a -> ");
    scanf("%d", &a);
    printf("Enter b -> ");
    scanf("%d", &b);
    printf("Enter x -> ");
    scanf("%d", &x);
    printf("Print 1 (a or b minus x) or print 0 (a or b plus x) -> ");
    scanf("%d", &m);

    if (a == b)
    {
        printf("a = b");
        return 0;
    }
    if (m == 1)
    {
        if (a > b)
        {
            c = a - x;
            printf("a - x = %d", c);
        }
        if (b > a)
        {
            c = b - x;
            printf("b - x = %d", c);
        }
    }
    if (m == 0)
    {
        if (a < b)
        {
            c = a + x;
            printf("a + x = %d", c);
        }
        if (b < a)
        {
            c = b + x;
            printf("b + x = %d", c);
        }
    }
    return 0;
}
