#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str : input string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len, len1;

	len = strlen(str);

	if (len % 3 == 0)
	{
		len1 = (len / 2) + 1;
	}
	else
	{
		len1 = len / 2;
	}
	while (len1 < len)
	{
		_putchar(*(str + len1));
		len1++;
	}
	_putchar('\n');
}
