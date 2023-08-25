#include "monty.h"

/**
 * handle_push - Push values to the stack
 * @stack: The stack where the info will be stored
 * @line_number: The line number on where the instruction is on
*/

void handle_push(UNUSED stack_t **stack, unsigned int line_number)
{
	printf("I got called push of course on line number %d\n", line_number);
}

/**
 * handle_pall - Print the values of the stack
 * @stack: The "db" where the value are stored
 * @line_number: The line number where the instruction is
*/

void handle_pall(UNUSED stack_t **stack, unsigned int line_number)
{
	printf("I got called yay pall func lol on line number %d\n", line_number);
}
