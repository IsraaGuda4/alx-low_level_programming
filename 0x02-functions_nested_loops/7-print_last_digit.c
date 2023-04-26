#include "main.h"

/**
 * print_last_digit - prints the value of the last digit
  * @n: The number in question.
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar(lastDigit + '0');
	return (lastDigit);
}

