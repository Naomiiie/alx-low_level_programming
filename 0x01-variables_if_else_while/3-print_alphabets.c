#include <stdio.h>
/**
 * main - prints the alphabet in lower case and then in uppercase
 *
 * Return: 0 (success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar (ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
