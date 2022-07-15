#include <stdio.h>
#include <stdlib.h>
/**
 * main - main code
 * Description: prints all single digit numbers of base ten
 * Return: always 0. (success)
 */
int main(void)
{
	char a, b;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
