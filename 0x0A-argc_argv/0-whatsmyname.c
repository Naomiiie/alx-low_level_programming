#include "main.h"
/**
 * main - prints its name, followed by a new line.
 * @argv: Array of strings containing the arguments
 * @argc: The number of command-line arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	printf("File name is %s\n", argv[0]);
	return (0);
}
