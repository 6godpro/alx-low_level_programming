#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in an array of integers
 *               using Jump search algorithm.
 * @array: The array to be searched.
 * @size: The size of the array.
 * @value: The value to be searched for.
 *
 * Return: If the array is NULL or the value is not present - -1.
 *         Otherwise - The first index at which the value was found.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i = i + jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if ((array[i] <= value && array[i + jump] >= value)
		    || i == size - 1)
		{
			printf("Value found between [%ld] and [%ld]\n",
			       i, i + jump);
			for (; i <= i + jump; i++)
			{
				if (i == size)
					return (-1);
				printf("Value checked array[%ld] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
