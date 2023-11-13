#include"shell.h"
/**
 * main - execute the shell program
 * Return: 0
 */
int main(void)
{
	char *input;

	while (1)
	{
		input = get_input();
		if (input == NULL || input == 0)
			break;
		if (strcmp(input, "exit") == 0)
			exit_shell();
		execute_command(input);
		free(input);
	}
	return (0);
}
