#include "main.h"
/**
* print_sign - Prints the sign of a number.
* @n: The number of which the sign will be printed.
*Return: return 0 if the n is zero
*        return + if the n is greater than zero
*        returns - if the n is less than Zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}

