#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block for printing combinations
 * Description : prints all possible combinations of single-digit numbers
 *  Return: Always 0 (success)
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
