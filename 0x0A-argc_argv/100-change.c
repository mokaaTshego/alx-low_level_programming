#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main -  prints the minimum number of coins
 * to make change for an amount of money.
 * argc : int
 * argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, res;
	int coins[] = {25,10,5,2,1};

	res = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && i > 0; j++)
	{
		while(i >= coins[j])
		{
			res++;
			i -= coins[j];
		}
	}
	printf("%d\n", res);
	return (0);
}
