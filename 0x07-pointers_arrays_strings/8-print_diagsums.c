#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a : pointer
 * @size : size of matrix
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	while (j < size)
	{
		sum1 += *(a + (size * j + j));
		sum2 += *(a + (size * j + size - 1 - j));
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
