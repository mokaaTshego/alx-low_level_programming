#include "main.h"
#include <ctype.h>
/**
 *  * _islower - checks for lowercase characters
 *   *@c : contain value ued to compare
 *    * Return: Always 0.
*/
int _islower(int c)
{
	if (!islower(c))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
