#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct print - Definition, print.
 * @sym: first member.
 * @f: second member.
 * Description: New struct type defining a structure
 *		print with two members. The first is
 *		is a character pointer and the second
 *		is a pointer to a function that returns
 *		void.
 */
typedef struct print
{
	char *sym;
	void (*f)(va_list arg);

} print_t;


#endif /*VARIADIC_FUNCTIONS_H*/
