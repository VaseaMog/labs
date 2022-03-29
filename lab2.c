#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    printf("Enter x [3.27 <= x <= 4.68]\n");
    scanf ("%lf", &x);
    if (3.27 <= x && x <= 4.68)
    {
        double y = asin(4 - x) + log(log(x));
        double z = acos((2*y)/(1+y));
        printf("y(x) = %lf\nz(y) = %lf\n", y, z);
    }
    else
        printf("x value is incorrect !\n");
    return 0;
}
