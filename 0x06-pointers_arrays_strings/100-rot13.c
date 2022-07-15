#include "main.h"
/**
 * *rot13 - that encodes a string using rot13.
 * @str : input string
 * Return: Always 0.
 */
char *rot13(char *str)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[j] == alphabet[j])
			{
				str[j] = rot13[j];
				break;
			}
		}
	}
	return (str);
}
