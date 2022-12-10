#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int os = '0';
	int ts = '0';

	for (ts = '0'; ts <= '9'; ts++)
	{
		for (os = '0'; os <= '9'; os++)
		{
			if (!((os == ts) || (ts > os)))
			{
				putchar(ts);
				putchar(os);
				if (!(os == '9' && ts == '8'))
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
