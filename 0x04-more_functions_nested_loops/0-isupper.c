#include "main.h"
#include <ctype.h>
/**
 *  _isupper - checks for uppercase character
 *  @c: carrier integer variable
 *  Return: Always 0.
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
