#include <stdio.h>
/**
 * main - main code
 * Description : t finds and prints the sum of the even-valued terms
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k, l;

	i = 0;
	j = 1;
	k = 0;
	l = 0;
	while (k < 4000000)
	{
		k = i + j;
		i = j;
		j = k;
		if ( k % 2 == 0)
		{
			l = l + k;
		}
	}
	printf("%i\n", l);
	return (0);
}
