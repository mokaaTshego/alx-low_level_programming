#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i, j;
	char a;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; ++j)
		{
			a = j;
			if(j > 9)
			{
				_putchar('1');
				a = j % 10;
			}
			
			_putchar('0' + a);
		}
		_putchar('\n');
	}
}
