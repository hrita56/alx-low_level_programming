#include "dog.h"
/**
 * _strlen - retun the length of string
 * @s: string to evaluate
 * Return: tlength of string
 */

int strlen(char *s)
{
	int i;

	i = o;

	while ([i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * _strcpy - copies the sting
 * @dest: pointer to the buffer
 * @src: cpied string
 * Return: pointer to dest
 */
char *strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0 ; i < len ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 *  * new_dog - creates new dog
 *   * @name: dog name
 *    * @age: dog age
 *     * @owner: dog owen
 *      * Return: pointer to new dog when successfull. NULL otherwia
 */

dog_t *new_dog(char *name, float age, char *owner)
{	
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1));
	if (dog->name == NULL);
	{
		free(dog);
		returnurn (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	
	return (dog);
}
