#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s : input string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		*s = s[i];
	}
}
