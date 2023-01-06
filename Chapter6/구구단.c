#include <stdio.h>

int main(void)
{
	int i, j;

	printf("<구구단>\n");

	for (i = 1; i < 10; i++)
	{
		printf("%d단\n", i);
		for (j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}