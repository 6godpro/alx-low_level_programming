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

	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		/* If the value is in the range or it's the last value. */
		if ((i + jump < size &&
		     array[i] <= value && array[i + jump] >= value)
		    || i == size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       i, i + jump);
			for (; i <= i + jump && i < size; i++)
			{
				printf("Value checked array[%ld] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
