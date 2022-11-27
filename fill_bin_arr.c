#include "main.h"

/**
 * fill_bin_arr - prints decimal in binary
 * @bin: pointer to binary
 * @int_in: input number
 * @isneg: if input number is negative
 * @size: size of the binary
 * Return: number of chars printed.
 */
char *fill_bin_arr(char *bin, long int int_in, int isneg, int size)
{
	int j;

	for (j = 0; j < size; j++)
		bin[j] = '0';
	bin[size] = '\0';
	for (j = size - 1; int_in > 1; j--)
	{
		if (int_in == 2)
			bin[j] = '0';
		else
			bin[j] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (int_in != 0)
		bin[j] = '1';
	if (isneg)
	{
		for (j = 0; bin[j]; j++)
			if (bin[j] == '0')
				bin[j] = '1';
			else
				bin[j] = '0';
	}
	return (bin);
}
