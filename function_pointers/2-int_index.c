#include <stdio.h>

/**
 * int_index - Function that prints a name.
 * @array: array to run
 * @size: size of array
 * @cmp: funtion to pointer
 * Return: void.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
