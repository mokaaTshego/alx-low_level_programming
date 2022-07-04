#include <stdio.h>
#include <ctype.h>
/**
 *  * main -Entry point
 *   *
 *    * Return: Always 0 (Success/correct)
*/
int main(void)
{
int i, j, lowercase, uppercase;
for (i = 'A'; i <= 'Z' ; i++)
{
	lowercase = tolower(i);

	putchar(lowercase);
}


for (j = 'A' ; j <= 'Z' ; j++)
{
	uppercase = toupper(j);

	putchar(uppercase);

}
putchar('\n');

return (0);
}
