#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: pointer to destination memory area where the bytes will be copied
 * @src: computed byte
 * @n: bytes
 * Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *destination = dest

	for (i = 0; i < n; i++)
	dest[i] = src[i];

	return (dest);
}
