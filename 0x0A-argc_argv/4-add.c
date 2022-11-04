#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument value
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int i, add;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			add += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (add > 0)
		printf("%d\n", add);
	return (0);
}
