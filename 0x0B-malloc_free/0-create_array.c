#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_array - a func that creates an array of chars, and init it with a specific char.
 *
 * @size: size of the array
 * @c: storage char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *cre;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	cre = malloc(sizeof(c) * size);

	if (cre == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cre[i] = c;

	return (cre);
}
