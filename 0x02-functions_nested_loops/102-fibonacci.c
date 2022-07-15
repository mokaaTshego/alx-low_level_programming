#include <stdio.h>
/**
 * main - main code
 * Descrption :prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Returrn : Always 0 (Success).
 */
int main(void)
{
	long int a, b, c, d;

	b = 1;
	a = 1;
	c = 2;
	while (a < 51)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		d = b + c;
		b = c;
		c = d;
		a++;
	}
	return (0);
}
