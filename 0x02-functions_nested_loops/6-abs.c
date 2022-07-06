#include "main.h"
#include <stdlib.h>
/**
 *  * _abs - computes the absolute value of an integer
 *   *
 *    *@i: The int to compute ab value for
 *     * Return: Always 0.
 */
int _abs(int i)
{
	if (i == 0)
	{
		return (0);
	}
	else if (i > 0)
	{
		return (i);
	}
	else
	{
		return ((-1) * i);
	}
}
