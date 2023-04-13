#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 * search algorithm, not guaranteed to return lowest index if `value` appears
 * twice in `array`
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int right, mid, left;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	right = 0;
	left = size - 1;

	while (right <= left)
	{
		mid = (right + left) / 2;

		printf("Searching in array: ");
		for (x = right; x <= left; x++)
			printf("%i%s", array[x], x == left ? "\n" : ", ");

		if (array[mid] < value)
			right = mid + 1;
		else if (array[mid] > value)
			left = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
