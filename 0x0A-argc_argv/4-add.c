
#include <stdio.h>

#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	fro (i = 1 < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]));
			return (i);
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
