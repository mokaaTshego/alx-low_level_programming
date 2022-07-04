#include <stdio.h>
#include <ctype.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success/correct)
 */
int main(void)
{
int i, lowercase;
for (i = 'A' ; i <= 'Z' ; i++)
{
	lowercase = tolower(i);

	if (lowercase == 'e')
		continue;

	else if (lowercase == 'q')
		continue;

	putchar(lowercase);
}
putchar('\n');

return (0);
}
