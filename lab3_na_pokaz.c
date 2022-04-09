#include <stdio.h>
#include <math.h>

int main()
{
    int b;
    double y, h;
    double x = 0;
    printf("Enter h -> ");
    scanf("%lf", &h);
    b = 2 / h;
    printf("x       f(x)\n------------\n");
    while (b > h)
    {
        if (0 <= x && x <= 1)
        {
            y = x * x * atan(x);
            printf("%3.2lf     %3.2lf\n", x, y);
        }
        if (1 < x && x <= 2)
        {
            y = sin((1.0 / (x * x)));
            printf("%3.2lf     %3.2lf\n", x, y);
        }
        x += h;
        b--;
    }
    return 0;
}
