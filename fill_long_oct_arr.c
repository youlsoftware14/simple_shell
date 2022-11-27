#include "main.h"

/**
 * fill_long_oct_arr - calculates a long octal number
 *
 * @bin: array where the binary data is stored
 * @oct: array where the octal data is stored
 *
 * Return: binary array.
 */
char *fill_long_oct_arr(char *bin, char *oct)
{
	int ops, i, j, ioct, size;

	oct[22] = '\0';
	for (i = 63, ioct = 21; i >= 0; i--, ioct--)
	{
		if (i > 0)
			size = 4;
		else
			size = 1;
		for (ops = 0, j = 1; j <= size; j *= 2, i--)
			ops = ((bin[i] - '0') * j) + ops;
		i++;
		oct[ioct] = ops + '0';
	}
	return (oct);
}
