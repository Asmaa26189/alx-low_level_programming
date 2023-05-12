#include "mainn.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - main function
 * @argc: arg
 * @argv: vector arg
 *Return:  0
 */
int main(int argc, char  *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
