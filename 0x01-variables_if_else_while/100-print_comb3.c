#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (j = '0'; j <= '9'; j++)
	{
		for (i = (j + 1); i <= '9'; i++)
		{
			putchar(j);
			putchar(i);
			if (j != '8' || i != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
