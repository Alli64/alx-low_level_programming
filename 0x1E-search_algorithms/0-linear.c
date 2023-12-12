#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: pointer to first element in array to search
 * @value: value to search for
 * @size: number of elements in array
 * Return: if value not present or array is NULL, -1
 * otherwise - first index where value is located
 */

int linear_search(int *array, size_t size, int value);
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
