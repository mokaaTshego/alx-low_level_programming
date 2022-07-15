#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a : array
 * @n : number odf elements in array
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int *b, *c;

	b = a;
	c = (a + n - 1);
	while (b < c)
	{
		*b = *c;
		*c = *b;
		*b = *c;
		b++;
		c--;
	}
}
