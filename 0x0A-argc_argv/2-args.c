#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc : int
 * @argv : array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
