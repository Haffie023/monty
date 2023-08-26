#include "monty.h"

static void find_instructions(FILE *file, instruction_t instructions[]);
char *filename, *value;
/**
 * main - Entry point and function runner
 * @argc: The command line arguments
 * @argv: The arguments (string format) from the
 * terminal (or stdout)
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	FILE *file;

	instruction_t instructions[] = {
		{"pall", handle_pall},
		{"push", handle_push},
		{NULL, NULL}
	};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	filename = argv[1];

	file = fopen(filename, "r");

	if (!file)
	{
		fprintf(stderr, "couldn't open the file\n");
		exit(EXIT_FAILURE);
	}

	find_instructions(file, instructions);

	fclose(file);

	return (0);
}

/**
 * find_instructions - Get the instructions to be run
 * @file: The file where the instructions will be gotten from
 * @instructions: An array of instructions to be acted upon
 *
*/

static void find_instructions(FILE *file, instruction_t instructions[])
{
	stack_t **content = malloc(sizeof(stack_t));
	ssize_t line_c = 0;
	size_t len = 0;
	char *line = NULL, *_op;
	unsigned int j, line_number = 1;

	while ((line_c = getline(&line, &len, file)) != -1)
	{
		char *clean_line = remove_space(line);

		if (clean_line[0] == '\n')
		{
			free(clean_line);
			line_number++;
			continue;
		}
		_op = strtok(clean_line, " \n\t\r");
		j = 0;
		value = strtok(NULL, " \n\t\r");
		while (instructions[j].opcode != NULL)
		{
			if (strcmp(instructions[j].opcode, _op) == 0)
			{
				instructions[j].f(content, line_number);
				break;
			}

			j++;
		}
		line_number++;
		free(clean_line);
	}

	free(line);
}
