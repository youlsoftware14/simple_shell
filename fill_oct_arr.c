#include "main.h"

/**
 * fill_oct_arr - writes the character to standard output
 *
 * @bin: array where is the binary data is stored.
 * @oct: array where the octal data is stored.
 *
 * Return: binary array.
 */

char *fill_oct_arr(char *bin, char *oct)
{
	int ops, i, j, ioct, limit;

	oct[11] = '\0';
	for (i = 31, ioct = 10; i >= 0; i--, ioct--)
	{
		if (i > 1)
			limit = 4;
		else
			limit = 2;
		for (ops = 0, j = 1; j <= limit; j *= 2, i--)
			ops = ((bin[i] - '0') * j) + ops;
		i++;
		oct[ioct] = ops + '0';
	}
	return (oct);
}
