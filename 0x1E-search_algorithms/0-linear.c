#include "search_algos.h"

/**
 * linear_search - Searches for a value in array of integers
 *                 using Linear search algorithm.
 * @array: The array to be searched.
 * @size: The size of the array.
 * @value: The value to be searched for.
 *
 * Return: If the array is NULL or the value is not present - -1.
 *         Otherwise - The first index at which the value was found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
