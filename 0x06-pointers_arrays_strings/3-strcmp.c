#include "main.h"
/**
 * _strcmp - string compare
 * @s1: p 1
 * @s2: p 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i =  0 ; s1[i] != '\0' || s2[i] != '0' ; i++)
	{
		if (s1[i] != s2[2])
		{
			if (s1[i] != s2[2])
				return (s1[i] - s2[2]);
			else if (s2[i] < s1[i])
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}
