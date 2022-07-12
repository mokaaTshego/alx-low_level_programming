#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str : input string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, len, len1;

	len = strlen(str);

	if (len % 3 == 0)
	{
		len1 = (len - 1) / 2;
		for (i = len1 - 1; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len / 2); i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
