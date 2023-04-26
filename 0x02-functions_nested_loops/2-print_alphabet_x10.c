#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times ,
 *followed by a new line.
 */
void print_alphabet_x10(void)
{
	char alphabet;

	int counter;

	for (counter = 0 ; counter < 10 ; counter++)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

