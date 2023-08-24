#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new, *tmp;

    new = malloc(sizeof(stack_t));
    if (new == NULL)
        malloc_err();

    tmp = (*stack)->n;
    new->prev = *stack;
    new->next = tmp;
    tmp->prev = new;
    (*stack)->next = new;
}
