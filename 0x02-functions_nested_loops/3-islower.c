#include "main.h"

/**
 * _islower - prints lower cases
 * 
 * @c: the character
 * 
 * Return: 1 if c is lowercase or 0 if not.
 *
 */

int _islower(int c)
{
	if (c >= "a" && c <= 'z')
		return (1);
	else
		return (0);
}
