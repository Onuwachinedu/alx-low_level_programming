#include <stdio.h>

/**
 * main - A program that prints the number of arguments
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: return 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
