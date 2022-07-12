#include <string.h>
#include "main.h"
/**
 * *_strcpy - copies the string 
 * @dest : destination string
 * @src : source string
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
