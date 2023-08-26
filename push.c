#include "monty.h"

/**
 * handle_push - Push values to the stack
 * @stack: The stack where the info will be stored
 * @line_number: The line number on where the instruction is on
*/

void handle_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	int num;

	if (value == NULL)
		val_err(line_number, " usage: push integer");

	num = atoi(value);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Memory allocation error\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}

	*stack = new_node;
}

/**
 * handle_pall - Print the values of the stack
 * @stack: The "db" where the value are stored
 * @line_number: The line number where the instruction is
*/

void handle_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (isEmpty(stack))
		return;

	if (stack == NULL)
	{
		fprintf(stderr, "problem in line number %d\n", line_number);
		exit(EXIT_FAILURE);
	}

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

