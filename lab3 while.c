#include <stdio.h>
#include <math.h>
int main()
{
	double y, h;
	printf("Enter h -> ");
	scanf("%lf", &h);
	printf("x       f(x)\n------------\n");
	double x = 0.00;
	while (x <= 2.0)
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
	x = x + h;
	}
}
