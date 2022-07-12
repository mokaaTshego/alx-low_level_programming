#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string, in reverse
 * @s : input string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
