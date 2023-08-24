#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new, *tmp;

    new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        fprintf(stderr, "L<line_number>: usage: push integer\n");
        exit(EXIT_FAILURE);
    }
    tmp = (*stack)->n;
    new->prev = *stack;
    new->next = tmp;
    tmp->prev = new;
    (*stack)->next = new;
}
// is this okay now?
// not sure, but I guess
// okay. i think the checker has been released..
