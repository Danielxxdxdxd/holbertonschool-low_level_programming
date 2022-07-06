#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *dup = NULL;
	unsigned int i = 0, len = 0;

	if (!str)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (!dup)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;
	return (dup);
}
