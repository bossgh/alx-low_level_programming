#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets except e and q
 *
 * Returns: Always 0 (Success)
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
