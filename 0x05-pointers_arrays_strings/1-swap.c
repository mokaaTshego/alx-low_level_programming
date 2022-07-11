#include "main.h"
/**
 * swap_int -  swaps the values of two integers
 * @a : integer 1
 * @b : integer 3
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
