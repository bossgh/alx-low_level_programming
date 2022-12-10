#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int os = '0';
	int ts = '0';
	int hs = '0';
	
	for (hs = '0'; hs <= '9'; hs++)
	{
		for (ts = '0'; ts <= '9'; ts++)
		{
			for (os = '0'; os <= '9'; os++)
			{
				if (!((os == ts) || (ts == hs) || (ts > os) || hs > ts))
				{
					putchar(hs);
					putchar(ts);
					putchar(os);
					if (!(os == '9' && hs == '7' && ts =='8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
