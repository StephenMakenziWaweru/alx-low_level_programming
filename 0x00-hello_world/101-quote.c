/*
 * File 101-quote.c
 * Auth: Stephen Makenzi Waweru <stevomakenzi@gmail.com>
 */

#include <unistd.h>

/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * to the stderr followed by a new line.
 *
 *Return:Always 1.
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}
