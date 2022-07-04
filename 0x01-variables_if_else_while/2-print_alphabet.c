#include <stdio.h>
#include <ctype.h> 
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success/correct)
 */
int main(void){
int i;
for(i = 'A' ; i <= 'Z'; i++)
{
	int lowercase = tolower(i);
	putchar(lowercase);
}

putchar('\n');

return (0);
}
