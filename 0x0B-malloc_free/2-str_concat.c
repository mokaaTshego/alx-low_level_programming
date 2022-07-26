#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenates two strings
 * @s1 : string 1
 * @s2 : strin g 2
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	j = 0;
	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	ptr = malloc(strlen(s1) + strlen(s2) + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; (ptr[j] = s1[i]) != '\0'; ++i, ++j)
	{
	}
	for (i = 0; (ptr[j] = s2[i]) != '\0'; ++i, ++j)
	{
	}
	return (ptr);
}
