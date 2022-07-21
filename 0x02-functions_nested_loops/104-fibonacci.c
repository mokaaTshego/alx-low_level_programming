#include <stdio.h>
/**
 * main - main code
 * Description : finds and prints the first 98 Fibonacci numbers
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, c, d, e, f, g;

	a = 1;
	b = 2;
	printf("%lu", a);
	for (c = 1; c < 91; c++)
	{
		printf(", %lu", b);
		b += a;
		a = b - a;
	}
	d = a / 1000000000;
	e = a % 1000000000;
	f = b / 1000000000;
	g = b % 1000000000;
	for (c = 92; c < 99; c++)
	{
		printf(", %lu", f + (g / 1000000000));
		printf("%lu", g % 1000000000);
		f += d;
		d = f - d;
		g += e;
		e = d - e;
	}
	printf("\n");
	return (0);
}
