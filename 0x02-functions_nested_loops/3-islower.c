#include "main.h"

/**
 * _islower - prints lower cases
 *
 * Return: 1 if c is lowercase
 *
 * Return: 0 otherwise
 */

int _islower(int c)
{
	return ((c >= "a" && c <= 'z') || (c >= 'A' && c <= 'Z'))
}
