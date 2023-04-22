#include <stdio.h>
#include <stdio.h>
/**
 * main - starting point
 *
 * Description: print all letters in lowercase and uppercase
 *
 * Return: 0 (success)
*/
int main(void)
{
char ch;
/*print a - z*/
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
/*print A - Z*/
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
