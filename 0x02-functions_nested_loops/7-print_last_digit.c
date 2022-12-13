#include "main.h"

/**
 * print_last_digit - prints the last digit of number
 *
 * @n: the number
 *
 * Return: the value of last digit of n
 */

int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m *= -1;

	_putchar(m + '0');
	
	return (0);
}
