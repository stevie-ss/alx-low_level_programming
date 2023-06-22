#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - print name using pointer to function oh nah nah whats my name
* @name: string to add
* @f: pointer to function
* Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;


	f(name);
}
