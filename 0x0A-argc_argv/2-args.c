#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array with the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
