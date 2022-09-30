#include "main.h"

/**
 * _memcpy - copies n char from memory area src to memory area dest
 *
 * @dest: destination array pointer
 * @src: pointer to the source of data to be copied
 * @n: Number of bytes to be copied
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
