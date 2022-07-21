#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n : input integer
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
/**
 * square_root - square root function
 * @n : integer
 * @m : integer
 * Return: Always 0.
 */
int square_root(int n, int m)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((m * m) == n)
	{
		return (m);
	}
	else if ((m * m) > n)
	{
		return (-1);
	}
	else
	{
		return (square_root(n, m + 1));
	}
	return (0);
}
