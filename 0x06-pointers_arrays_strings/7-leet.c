#include "main.h"
/**
 * *leet - encodes a string into 1337.
 * @str : pointer
 * Return: Always 0.
 */
char *leet(char *str)
{
	int j, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == low_letters[j] || str[i] == upp_letters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}
	return (str);
}
