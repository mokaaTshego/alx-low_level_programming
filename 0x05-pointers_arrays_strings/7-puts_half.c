#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str : input string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, l;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	l = (i + 1) / 2;
	for (i = l; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
