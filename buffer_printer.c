#include "main.h"

/**
 * buffer_printer - prints buffer
 * @buffer: buffer pointer
 * @nbuffer: number of bytes to print to buffer
 * Return: number of bytes printed.
 */
int buffer_printer(char *buffer, unsigned int nbuffer)
{
	return (write(1, buffer, nbuffer));
}
