#include "main.h"

/**
 * _isalpha - Returns 1 if c i letter
 *
 * @c: the character
 *
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <='z') || (c >= 'A' && c <='Z'))
		return (1);
	else
		return (0);
}
