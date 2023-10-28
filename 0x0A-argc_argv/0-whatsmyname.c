#include <stdio.h>

/**
 *main - prints the name of the program.
 *@argc: arguments count
 *@argv: arguments vector
 *
 *Return: 0 Always (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
