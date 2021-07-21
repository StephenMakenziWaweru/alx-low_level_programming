/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to function.
 * @char: name passed to that function.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
