#include <stdio.h>
/**
 * main - starting point
 *
 * Description: Display all digit numbers from 0 to 10
 *
 * Return: 0  (success)
*/
int main(void)
{
int n;
for (n = 0 ; n < 10 ; n++)
{
putchar((n % 10) + '0');
}
putchar('\n');
return (0);
}
