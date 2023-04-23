#include <stdio.h>
#include <stdio.h>
/**
 * main - starting point
 *
 * Description: print all letters in lowercase except q & a letters
 *
 * Return: 0 in case (success)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
	if (ch != 'e' || ch != 'q')
		ch++;
	putchar(ch);
	ch++;
}
putchar('\n');
return (0);
}

