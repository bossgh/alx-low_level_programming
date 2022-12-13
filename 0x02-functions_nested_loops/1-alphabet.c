#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always 0 (Success)
 */

int print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
