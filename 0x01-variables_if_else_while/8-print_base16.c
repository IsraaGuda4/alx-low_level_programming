#include <stdio.h>
/**
 * main - starting point
 *
 * Description: print numbers of base 16 in lowercase
 *
 * Return: 0  (success)
*/
int main(void)
{
int n;
char k;
for (n = 0 ; n < 10 ; n++)
{
	putchar((n % 10) + '0');
}
for (k = 'a'; k <= 'f'; k++)
{
	putchar(k);
}
putchar('\n');
return (0);
}
