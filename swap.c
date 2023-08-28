#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: pointer to the stack
 * @line_number: line number where the function is called from
*/

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", line_number);
		free(stack);
		exit(EXIT_FAILURE);
	}

	tmp1 = *stack;
	tmp2 = tmp1->next;

	tmp1->next = tmp2->next;
	if (tmp2->next != NULL)
		tmp2->next->prev = tmp1;

	tmp2->next = tmp1;
	tmp1->prev = tmp2;
	tmp2->prev = NULL;

	*stack = tmp2;
}
