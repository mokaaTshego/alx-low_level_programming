#include <stdio.h>
#include <stdlib.h>
/**
 * main - main code
 * Description - computes and prints the sum of all the multiples 
 * of 3 or 5 below 1024 (excluded)
 * Return: Always 0 (success).
 */
int main(void)
{
	int i, j;

	j = 0;
	
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 ==0)
		{
			j += i;
		}
	}
	printf("%i\n", j);
	return (0);
}
