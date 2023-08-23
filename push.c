#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

    new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        fprintf(stderr, "L<line_number>: usage: push integer\n");
        exit(EXIT_FAILURE);
    }
    new->n = n; 
    new->next = *stack;
    *stack = new;	
}
