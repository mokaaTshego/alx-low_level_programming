#include <stdio.h>
#include <ctype.h>
/**
 *  * main -Entry point
 *   *
 *    * Return: Always 0 (Success/correct)
*/
int main(void)
{
int i, lowercase, uppercase;
for (i='A'; i <= 'Z' ; i++)
{
	lowercase = tolower(i);

	putchar(lowercase);
	
	uppercase = toupper(i);

	putchar(uppercase);
}
putchar('\n');

return (0);
}
