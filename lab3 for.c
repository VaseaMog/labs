#include <stdio.h>
#include <math.h>
int main()
{
	double y, h, x;
	printf("Enter h -> ");
	scanf("%lf", &h);
	printf("x       f(x)\n------------\n");
    for (x = 0.0; x <= 2.0; x += h)
    {
		if (x < 1.0)
		{
			y = x * x * atan(x);
			printf("%3.2lf     %3.2lf\n", x, y);
		}
		else if (x > 1.0)
		{
			y = sin((1.0 / (x * x)));
			printf("%3.2lf     %3.2lf\n", x, y);
		}
    }
}
