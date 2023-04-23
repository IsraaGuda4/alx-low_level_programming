#include <stdio.h>
/**
 * main - starting point
 *
 * Description: print all possible combinations of single-digit numbers
 *
 * Return: 0  (success)
*/
int main(void)
{
int n, h;

for (n = 0; n < 100; n++)
{
for (h = 0; h < 100; h++)
{
if (n < h)
{
putchar((n / 10) + 48);
putchar((n % 10) + 48);
putchar(' ');
putchar((h / 10) + 48);
putchar((h % 10) + 48);
if (n != 98 || h != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
