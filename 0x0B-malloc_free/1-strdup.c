#include "main.h"
#include <stdlib.h>
/**
 * *_strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str : input string
 * Return: POinter to array
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *ptr;

	i = 0;
	j = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[i] != '\0'; i++)
		;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (; j < i; j++)
		{
			ptr[j] = str[j];
		}
	}
	return (ptr);
}
