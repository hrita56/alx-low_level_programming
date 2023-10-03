#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to function that concatenates two strings.
 * @s1: input 1
 * @s2: input 2
 * Return: concatination;
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	c = malloc(sizeof(char) * (i + ci + 1));

	if (c == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
