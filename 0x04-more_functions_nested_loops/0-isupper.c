#include "main.h"
#include <ctype.h>
/**
 *  _isupper - checks for uppercase character
 *  Return: Always 0.
 */
int _isupper(int c)
{
	if(!(isupper(c)))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
