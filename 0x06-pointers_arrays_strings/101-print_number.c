#include "main.h"
/**
 * print_number - prints an integer
 * @n: input integer
 * Return: Always 0.
 */
void print_number(int n)
{
	int i, j, k;

	j = 1;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (i = 0; n / j > 9; i++, j *= 10);
	for (; j >= 1; n%= j, j /=10)
	{
		k = n / j;
		_putchar('0' + k);
	}
}
