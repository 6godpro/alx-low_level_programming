#include "search_algos.h"

/**
 * print - Prints values in an array.
 * @array: The array to be printed.
 * @start: The start of the array.
 * @end: The end of the array.
 */
void print(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	for (; start <= end; start++)
	{
		printf("%d", array[start]);
		start != end ? printf(", ") : printf("\n");
	}
}

/**
 * binary_search_helper - Searches for the minimum index at which
 *                        a value occurs.
 * @array: The array to be searched.
 * @start: The start of the array.
 * @end: The end of the array.
 * @value: The value to be searched for.
 * Return: If the value exists in the array - The minimum index.
 *         Otherwise - -1.
 */
int binary_search_helper(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (start <= end)
	{
		print(array, start, end);
		mid = (start + end) / 2;

		if (array[mid] < value)
			return (binary_search_helper(array, mid + 1, end, value));
		else if (array[mid] > value)
			return (binary_search_helper(array, start,
						     mid - 1, value));
		else if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
			else
				return (binary_search_helper(array, start,
							    mid, value));
		}
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in an array of inte-
 *                   gers using Binary search recursive method.
 * @array: The array to be searched.
 * @size: The size of the array.
 * @value: The value to be searched for.
 * Return: If the value exists in the array - The minimum index.
 *         Otherwise - -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (binary_search_helper(array, 0, size - 1, value));
}
