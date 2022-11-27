#include "main.h"

/**
 * fill_hex_arr - writes the character to standard output
 *
 * @bin: array where the binary data is stored .
 * @hex: array where the hexadecimal data is stored
 * @isupper: integer that determines the hexadecimal array is
 * in upper or lower case.
 * @size: size of hex
 * Return: binary array.
 */
char *fill_hex_arr(char *bin, char *hex, int isupper, int size)
{
	int ops, i, j, letter_con;

	hex[size] = '\0';
	if (isupper)
		letter_con = 55;
	else
		letter_con = 87;
	for (i = (size * 4) - 1; i >= 0; i--)
	{
		for (ops = 0, j = 1; j <= 8; j *= 2, i--)
			ops = ((bin[i] - '0') * j) + ops;
		i++;
		if (ops < 10)
			hex[i / 4] = ops + 48;
		else
			hex[i / 4] = ops + letter_con;
	}
	return (hex);
}
