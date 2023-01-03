#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int diag1, diag2;

	size1 = 0;
	diag1 = 0;
	diag2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
	{
		diag1 = diag1 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		diag2 = diag2 + a[i];
	}
	printf("%d, %d\n", diag1, diag2);
}
