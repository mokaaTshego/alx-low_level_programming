#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s : input string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, len, c;
	char *begin, *finish, str;

	len = 0;
	for (i = 0; s[i]; i++)
	{
		len++;
	}
	c = len;
	begin = s;
	finish = s;

	for (i = 0; i < c - 1; i++)
	{
		finish++;
	}
	for (i = 0; i < c / 2; i++)
	{
		str = *finish;
		*finish = *begin;
		*begin = str;
		begin++;
		finish--;
	}
}
