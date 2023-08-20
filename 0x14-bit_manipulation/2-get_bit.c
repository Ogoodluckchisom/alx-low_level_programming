#include "main.h"
#include <stdio.h>

/**
 * get_bit - A function that gets a bit at index
 * @n: The number to get bit from
 * @index: The index where the bit get at
 *
 * Return: The value of the given bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len;

	len = sizeof(n) * 8;
	if (index > len - 1)
		return (-1);
	return ((n >> index) & 1);
}
