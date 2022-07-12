#include <stdio.h>
#include <stdlib.h>
/**
 * main - main code
 * Return : 0
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
