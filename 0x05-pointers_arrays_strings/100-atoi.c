#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: input string
 * Return: Always 0.
 */
int _atoi(char *s)
{
	unsigned int i, j, k, l;

	l = 0;
	k = 1;
	for (i = 0; !(s[i] >= 48 && s[i] <= 57); i++)
	{
		if (s[i] == '-')
		{
			k *= 1;
		}
	}
	for (j = i; s[j] >= 48 && s[j] <= 57; j++)
	{
		l *= 10;
		l += (s[j] - 48);
	}
	return (k * l);
}
