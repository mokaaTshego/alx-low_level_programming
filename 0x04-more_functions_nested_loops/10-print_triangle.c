#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size : is the size of the triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			if (j < size - i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if(i == 0)
		_putchar('\n');
}
