#include "main.h"
/**
 * *_memcpy -  copies memory area.
 * @dest : destination memory
 * @src : source memory
 * @n : bytes from memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (i = 0; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
