#include "main.h"
/**
 * *cap_string -  capitalizes all words of a string.
 * @str : input string
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	char space[] = ",\t;\n; .!?\"(){}";
	int i, j, flag;

	for (i = 0; str[i] != '\0'; i++)
	{
		flag = 0;
		if (i == 0)
		{
			flag = 1;
		}
		else
		{
			for (j = 0; space[j] != '\0'; j++)
			{
				if (str[i - 1] == space[j])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
	}
	return (str);
}
