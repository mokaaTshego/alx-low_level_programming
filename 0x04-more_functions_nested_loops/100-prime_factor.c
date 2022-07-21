#include <stdio.h>
#include "main.h"
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 612852475143;
	long int dividor = 2;
	long int largest_prime;

	while (n != 0)
	{
		if (n % dividor != 0)
		{
			dividor += 1;
		}
		else
		{
			largest_prime = n;
			n /= dividor;
		}
	}
	printf("%ld", largest_prime);
	return (0);
}
			
		
