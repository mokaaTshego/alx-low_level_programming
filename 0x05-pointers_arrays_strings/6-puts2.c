#include "main.h"
#include <string.h>
/**
 * void puts2 - prints every other character
 * @str : input string
 * Return: Always 0
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
