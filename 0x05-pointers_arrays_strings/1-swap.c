#include "main.h"

/**
 * swap_int - Swapping the values of two integers
 *
 * @a: first value
 * @b: second value
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
