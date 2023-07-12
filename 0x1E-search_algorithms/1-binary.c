#include "search_algos.h"

void print(int *, int, int);

/**
 * binary_search - Searches for a value in an array of integers
 *                 using Binary search algorithm.
 * @array: The array to be searched.
 * @size: The size of the array.
 * @value: The value to be searched for.
 *
 * Return: If the array is NULL or the value is not present - -1.
 *         Otherwise - The first index at which the value was found.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;
		print(array, start, end + 1);
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
 * print - Prints the values in an array.
 * @array: The array of integers to be printed.
 * @start: The start of the array.
 * @end: The end of the array.
 */
void print(int *array, int start, int end)
{
	printf("Searching in array: ");
	for (; start < end; start++)
	{
		printf("%d", array[start]);
		if (start + 1 != end)
			printf(", ");
	}
	printf("\n");
}
