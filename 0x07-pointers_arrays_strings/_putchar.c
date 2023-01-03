#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: The character to print
 *
 * Return: Always 1 (success)
 *
 * on error, -1 is returned, and errno is set approprietely
 */

int _putchar(char c)
{
	return (write(1, &c,1));
}
