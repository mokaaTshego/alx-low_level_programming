#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 *@i : return value of lastdigit
 *Return: Always 0.
 *
 */
int print_last_digit(int i)
{
	int lastdigit;

	if (i > 0)
	{
		lastdigit = i % 10;
		_putchar (lastdigit + '0');
		return (lastdigit);
	}
	else
	{
		lastdigit = ((i % 10) * (-1));
		_putchar (lastdigit + '0');
		return (lastdigit);
	}
}
