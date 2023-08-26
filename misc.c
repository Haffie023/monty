#include "monty.h"

/**
 * remove_space - Remove extra spaces from a string.
 * @str: The string in which spaces are to be removed
 * Return: The de-spaced string
 *
 * The problem with this function is that the trailing whitespace
 * may not be removed, this can be done but then why?
*/

char *remove_space(char *str)
{
	int new_length = 0, i = 0, j;
	char *without_space;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
			i++;
		else
			new_length++, i++;
	}

	without_space = malloc(new_length + 1);

	if (without_space == NULL)
		return (NULL);

	i = 0, j = 0;

	while (str[i] == ' ')
		i++;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
			i++;
		else
			without_space[j++] = str[i++];
	}

	without_space[j] = '\0';
	return (without_space);
}

/**
 * isEmpty - Check if a stack is empty or not
 * @stack: The stack to be checked
 * Return: true or false
*/

bool isEmpty(stack_t **stack)
{
	if (stack == NULL)
		return (true);

	return (false);
}

/**
 * val_err - Print function value value error
 * @line: The line number where the error occurred
 * @msg: The message to be printed
*/

void val_err(int line, char *msg)
{
	fprintf(stderr, "L%d: %s", line, msg);
	exit(EXIT_FAILURE);
}
