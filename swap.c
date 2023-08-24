#include "monty.h"
/**
 * swap - swaps the top two elements of the stack.
 * @s: the line number
 * 
*/

void swap(struct stack_s)
{ 
    if (s->current_size < 2) 
    { 
        printf("L%d: can't swap, stack too short\n", s->line_number);
        exit(EXIT_FAILURE);
    }
    else
    { 
        int temp = s->data[s->current_size];
        s->data[s->current_size] = s->data[s->current_size - 1];
        s->data[s->current_size - 1] = temp;
    } 
}