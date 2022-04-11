#include <stdio.h>
#include <math.h>

unsigned int rec(unsigned int n)
{
	if (n == 1) printf("Recursion: da\n");
	else if (n % 2 == 1)
	{
		printf("Recursion: net\n");
		return 0;
	}
	n = n / 2;
	rec(n);

}
unsigned int cycl(unsigned int n)
{
	int i = 1;
	while (i < n)
	{
		i = i * 2;
	}
	if (i == n) printf("Cycle: da\n");
	else printf("Cycle: net\n");
}
int main()
{
	int n;
	printf("Print naturalnoe chislo ->");
	scanf("%d", &n);
	cycl(n);
	rec(n);
	return 0;
}
