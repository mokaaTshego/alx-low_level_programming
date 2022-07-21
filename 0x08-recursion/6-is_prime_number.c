#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * , otherwise return 0
 * @n : input integer
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}
/**
 * _prime - checks prime number
 * @n : integer
 * @m : integer
 * Return: int
 */
int _prime(int n, int m)
{
	if (m >= n && n > 1)
	{
		return (1);
	}
	else if (n % m == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime(n, m + 1));
	}
	return (0);
}
