#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 *                it with a specific char.
 *
 * @size: array size
 * @c: char to initialize array with
 *
 * Return: array @a
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *b;

	if (size == 0)
		return (NULL);

	b = malloc(size * sizeof(char));

	if (b == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		b[i] = c;

	return (b);
}
