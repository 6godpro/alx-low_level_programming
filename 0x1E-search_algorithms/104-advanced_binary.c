#include "search_algos.h"

/**
 * print - Prints values in an array.
 * @array: The array to be printed.
 * @start: The start of the array.
 * @end: The end of the array.
 * @size: The original size of the array.
 */
void print(int *array, size_t start, size_t end, size_t size)
{
	end = end == size ? end - 1 : end;
	printf("Searching in array: ");
	for (; start <= end; start++)
	{
		printf("%d", array[start]);
		start != end ? printf(", ") : printf("\n");
	}
}

/**
 * _binary_search - Searches for the minimum index at which
 *                        a value occurs.
 * @array: The array to be searched.
 * @start: The start of the array.
 * @end: The end of the array.
 * @n: The value to be searched for.
 * @size: The original size of the array.
 * Return: If the value exists in the array - The minimum index.
 *         Otherwise - -1.
 */
int _binary_search(int *array, size_t start, size_t end, int n, size_t size)
{
	size_t mid;

	if (start <= end)
	{
		print(array, start, end, size);
		mid = (start + end) / 2;

		if (array[mid] < n)
			return (_binary_search(array, mid + 1, end,
					       n, size));
		else if (array[mid] > n)
			return (_binary_search(array, start,
					       mid - 1, n, size));
		else if (array[mid] == n)
		{
			/* If at start or previous value != current value */
			if (mid == 0 || array[mid - 1] != n)
				return (mid);
			else
				return (_binary_search(array, start,
						       mid, n, size));
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
	size_t temp_size = size;

	if (array == NULL)
		return (-1);

	size = size % 2 == 0 ? size - 1 : size;

	return (_binary_search(array, 0, size, value, temp_size));
}
