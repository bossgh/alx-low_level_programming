#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets ten times
 *
 * Return: Always 0 (Success)
 */

int print_alphabet_x10(void)
{
	char abc = 'a';
	int i;

	for (i = 0; i < 10; i ++)
	{
		while (abc <= 'z')
		{
			_putchar(abc);
		}
	}
}
