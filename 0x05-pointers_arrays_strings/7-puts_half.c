#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str : input string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
