#include "monty.h"
/**
 * swap - swaps the top two elements of the stack.
 * @stack: pointer to the stack
 * 
 * @line_number: line number where the call function is called from
*/

void swap(stack_t ** stack, unsigned int line_number)
{
	stak_t *tmp1,tmp2;
	(void) stack;
	if (args->stack_lengthy <2)
	{
		dprintf(2,"L%d: can't swap, stack too short\n",line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	tmp1 = arguments->head;
	tmp2 - tmp1->next;
	tmp1->next = tmp->next;
	if (tmp1->next)
		tmp1->next->prev - tmp1;
	tmp2->next = tmp1;
	tmp1->prev - tmp2;
	tmp2->prev = NULL;
	args->head = tmp2;
}
