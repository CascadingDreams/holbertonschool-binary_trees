#include "binary_trees.h"
/**
 * check_malloc - checks if malloc returned NULL and prints an error message
 * @ptr: pointer to check
 *
 * Return: 1 if malloc failed (ptr is NULL), otherwise 0.
 */
int check_malloc(void *ptr)
{
	if (!ptr)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	return (0);
}
