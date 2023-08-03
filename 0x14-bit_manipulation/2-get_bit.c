#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 *
 * @n: number
 *
 * @index: index of the bit
 *
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
