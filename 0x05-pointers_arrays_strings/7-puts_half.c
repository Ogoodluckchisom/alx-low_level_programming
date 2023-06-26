#include "main.h"

/**
 *  puts_half - a function that prints half of a string.
 * @str: a pointer point to a string.
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		putchar(str[j]);
		j++;
	}
	putchar('\n');
}
