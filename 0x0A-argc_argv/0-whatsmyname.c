#include <stdio.h>

/**
 * main -  This function prints its name
 *
 * @argc: argument count
 * @argv: argument vector/name
 *
 * Return: return 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
