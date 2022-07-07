#include "main.h"
#include <ctype.h>
/**
 *  _isupper - checks for uppercase character
 *  @c: carrier integer variable
 *  Return: Always 0.
 */
int _isupper(int c)
{
	if(!(isupper(c)))
	{
		return (0);
	}
	
	return (1);
}
