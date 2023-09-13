#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return 2;
	}

	/*Use objdump to disassemble the main function and extract opcodes*/
	char command[100];
	snprintf(command, sizeof(command), "objdump -d -j.text -M intel %s | grep 'main>' -A %d | tail -n +2 | cut -f2- | tr -d ' ' | tr '\\n' ' '", argv[0], num_bytes);

	FILE *fp = popen(command, "r");
	if (fp == NULL)
	{
		printf("Error\n");
		return 1;
	}

	char opcode[3];
	while (fscanf(fp, "%2s", opcode) == 1)
	{
		printf("%s", opcode);
		if (fgetc(fp) == EOF)
			break;
		printf(" ");
	}

	printf("\n");
	pclose(fp);

	return 0;
}
