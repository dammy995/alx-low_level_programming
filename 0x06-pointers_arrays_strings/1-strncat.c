#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: Destination
 * @src: source
 * @n: number of bytes from src
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, index = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}

	return (dest);
}
