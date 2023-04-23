#include <stdio.h>
#include <stdio.h>
/**
 * main - starting point
 *
 * Description: Display all lowercase in reverse
 *
 * Return: 0  (success)
*/
int main(void)
{
char ch;
for (ch = 'z' ; ch >= 'a' ; --ch)
{
putchar(ch);
}
putchar('\n');
return (0);
}
