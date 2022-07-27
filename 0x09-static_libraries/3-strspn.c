#include "main.h"
/**
 *  _strspn - gets the length of a prefix substring
 * @s : initial segment
 * @accept : sub string
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;
	for (j = 0; s[j] >= '\0'; j++)
	{
		for (i = 0; accept[i] > '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				count++;
				break;
			}
		}
		if ((accept[i]) == '\0')
		{
			break;
		}
	}
	return (count);
}
