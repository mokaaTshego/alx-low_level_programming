#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s : pointer
 * @b :constant byte
 * @n : bytes
 * Return  : Always 0 (succes).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
