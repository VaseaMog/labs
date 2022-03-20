#include <stdio.h>
#include <math.h>
int main() 
{
	double x;
	double y;
	printf("Enter x 0 <= x <= 2\n");
	scanf("%lf", &x);
	printf("x       f(x)\n------------\n");
	while (x >= 0 && x <= 2)
	{
		if (x >= 0 && x < 1)
		{
			y = x * x * atan(x);
			printf("%2.1lf     %2.1lf\n", x, y);
		}
		if (x > 1 && x <= 2)
		{
			y = sin((1 / (x * x)));
			printf("%2.1lf     %2.1lf\n", x, y);
		}
		x = x - 0.1;
	}
}
