#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, 
 * and initializes it with a specific char
 * @size : size of array
 * @c : input char
 * Return : Always 0(succes).
 */
char *create_array(unsigned int size, char c)
{
	char *x;

	x = malloc(size);
	if (size == 0 || x == NULL)
	{
		return (NULL);
	}
	while (size--)
	{
		x[size] = c;
	}
	return (x);
}
