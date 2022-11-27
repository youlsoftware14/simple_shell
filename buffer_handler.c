#include "main.h"

/**
 * buffer_handler - joins the buffer characters
 * @buffer: buffer pointer
 * @s: character to concatenate
 * @ibuffer: index of the buffer pointer
 * Return: index of the buffer pointer.
 */
unsigned int buffer_handler(char *buffer, char s, unsigned int ibuffer)
{
	if (ibuffer == 1024)
	{
		buffer_printer(buffer, ibuffer);
		ibuffer = 0;
	}
	buffer[ibuffer] = s;
	ibuffer++;
	return (ibuffer);
}
