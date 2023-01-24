#include <stdio.h>

int main(void)
{
	int sum[5][6];
	int i, j;
	int num = 1;
	int total1 = 0;
	int total2 = 0;
	int total = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			sum[i][j] = num;
			total += num;
			num++;
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			total1 += sum[i][j];
		}
		sum[i][5] = total1;
		total1 = 0;
	}

	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 4; i++)
		{
			total2 += sum[i][j];
		}
		sum[4][j] = total2;
		total2 = 0;
	}

	sum[4][5] = total;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%5d", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}