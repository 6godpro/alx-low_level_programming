#include "search_algos.h"


/**
 * _binary_search - Searches for a value in an array of integers
 *                  using Binary search algorithm.
 * @array: The array to be searched.
 * @value: The value to be searched for.
 * @start: The start of the array.
 * @end: The end of the array.
 *
 * Return: The first index at which the value is found
 *         Otherwise - -1.
 */
int _binary_search(int *array, int value, size_t start, size_t end)
{
	size_t mid, i;

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			i + 1 <= end ? printf(", ") : printf("\n");
		}
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}

	return (-1);
}


/**
 * exponential_search - Searches for a value in an array of integers
 *                      using Exponential search algorithm.
 * @array: The array to be searched.
 * @size: The size of the array.
 * @value: The value to be searched for.
 *
 * Return: If the array is NULL or the value is not found - -1.
 *         Otherwise - The index of the value.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, end;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n"
		       , bound, array[bound]);
		bound *= 2;
	}

	end = bound >= size ? bound - 1 : bound;
	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, end);

	return (_binary_search(array, value, bound / 2, end));
}

