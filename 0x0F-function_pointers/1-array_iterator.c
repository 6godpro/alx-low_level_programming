#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function given as a
 *		parameter on each element of an array.
 * @array: Array to be accessed.
 * @size: Size of the array to be accessed.
 * @action: Function to be executed.
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || action == NULL)
		return;

	for (index = 0; index < size; index++)
		action(array[index]);
}
