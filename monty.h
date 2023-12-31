#ifndef _MONTY_H_
#define _MONTY_H_
#define _GNU_SOURCE

/* Include header files */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <linux/limits.h> /* Just added it because why not */
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
		int n;
		struct stack_s *prev;
		struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
		char *opcode;
		void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

<<<<<<< HEAD
void push(stack_t **stack, unsigned int line_number);
int main(int argc, char *argv[]);
void error_report(int line_number, char *error_msg);
void malloc_err(void);
void swap(stack_t ** stack, unsigned int line_number);
#endif _MONTY_H_
=======
/* Define the functions that are essential */
char *remove_space(char *str);
bool isEmpty(stack_t **stack);
void val_err(int line, char *msg);

/* Define program constants, or something like that*/
extern char *filename;
extern char *value;
#define MAX_LINE INT_MAX
#define UNUSED __attribute__((unused))

/* Define the functions used for instructions*/
void handle_push(stack_t **stack, unsigned int line_number);
void handle_pall(stack_t **stack, UNUSED unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);

#endif
>>>>>>> bdfb033a6d2064d71fdff4838951e47b28b67320
