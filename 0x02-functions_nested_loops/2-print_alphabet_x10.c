#include "main.h"
/**
 *  * print_alphabet - print alphabet lowercase
 *   *
 *    * Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int i,j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

