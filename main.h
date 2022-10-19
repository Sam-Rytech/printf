#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

/**
* struct special_cases - is struct for special cases
* @match: the special character to match after finding a percentage
* @function: the specific function to be called in each special case
*/

typedef struct special_cases
{
	char *match;
	int (*function)(va_list);
} spc_t;


int _printf(const char *format, ...);
int _putchar(char c);
int (*mod_character_s(const char *next, int dino))(va_list);
int print_string(va_list s);
int print_char(va_list c);
int print_number(va_list i);
int print_unsigned(va_list u);
int print_reverse(va_list r);
int print_rot13(va_list R);

#endif /*MAIN_H*/
