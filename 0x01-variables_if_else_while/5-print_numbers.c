#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns numbers 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
