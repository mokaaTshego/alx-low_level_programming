#include "main.h"
/**
 * _strlen_recursion - returns the length of a string 
 * @s : input string pointer
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s)
	{
		count += _strlen_recursion(s + 1) + 1;;
	}
	return (count);
}
