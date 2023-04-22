#include <stdio.h>
#include <stdio.h>
/**
 * main - starting point
 *
 * Description: print all alphabet letters in lowercase
 *
 * Return: 0 (success)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
	putchar(ch);
	ch++;
}
putchar('\n');
return (0);
}
