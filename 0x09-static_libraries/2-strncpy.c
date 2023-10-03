#include "main.h"
/**
 * _strncpy - copy strings
 * @dest: destinaton string
 * @src: cource string
 * @n: number of byte to copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
