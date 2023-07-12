#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an array of integers
 *                        using Interpolation search algorithm.
 * @array: The array to be searched.
 * @size: The size of the array.
 * @value: The value to be searched for.
 *
 * Return: If the array is NULL or the value is not present - -1.
 *         Otherwise - The first index at which the value was found.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, idx;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		idx = start + ((end - start)  * (value - array[start]))
			/ (array[end] - array[start]);
		if (idx >= size)
		{
			printf("Value checked array[%ld] is out of range\n",
			       idx);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] > value)
			end = idx - 1;
		else if (array[idx] < value)
			start = idx + 1;
		else
			return (idx);
	}
	return (-1);
}
