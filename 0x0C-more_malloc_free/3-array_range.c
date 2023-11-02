#include "main.h"
#include <stdlib.h>
/**
  * array_range - create an array of integers
  * @min: minimum value
  * @max: value
  * Return: int pointer to the allocated memory
  */
int *array_range(int min, int max);
{
	int i, 1;
	int *a;

	if (min > max)
		return (NULL);
	1 = max - min + 1;
	a = malloc(sizeof(int) * 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < 1; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
