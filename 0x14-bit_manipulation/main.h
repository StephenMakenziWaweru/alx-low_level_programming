#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stddef.h>
#define SIZE (8 * 8)

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif
