#include <stdio.h>
#include"main.h"
/**
 * main -  prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: string of arrays
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/

	if (argc >= 1)
	printf("%d\n", argc - 1);
	return (0);
}
