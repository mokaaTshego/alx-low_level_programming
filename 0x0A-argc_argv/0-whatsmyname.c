#include "main.h"
#include <stdio.h>
/**
 * main - print program's name
 * @argc : size of array
 * @argv : array
 * Return : Always 0 
 */
int main(int argc, char *argv[])
{
	printf("%s\n",argv[argc - 1]);
	return (0);
}
