#include <stdio.h>
/**
 * main - prints the alphabet in lower case and then in uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
putchar (i);
for (i = 'A'; i <= 'Z'; i++)
putchar(i);
putchar('\n');
return (0);
}
