#include <math.h>
#include <stdio.h>

double f(int n)
{

    double I = 0.0;
    for (double x = -1.0 / n; x <= 2.0; x += 3 / n)
    {
        double y;
        if (x <= 1.0)
            y = exp( -2 * sin(x));
        else
            y = x*x - (1/tan(x));
        I += y;
    }
    I = (3 / n) * I;
    return I;
}

int main()
{
    double e;
    printf("Введите точность --> ");
    scanf("%lf", &e);
    int n = 1;
    double In = f(n);
    double I2n = f(2*n);

    while((fabs(I2n - In) / 3) >= e)
    {
        printf("%lf для n = %d\n", I2n, n*2);
        n = n * 2;
        In = I2n;
        I2n = f(2*n);
    }
    printf("%lf\n", I2n);

    return 0;
}
