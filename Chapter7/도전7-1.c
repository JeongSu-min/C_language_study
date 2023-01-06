#include <stdio.h>

int rec_func(int n);

int main(void)
{
	int res;
	res = rec_func(10);
	printf("%d", res);

	return 0;
}

int rec_func(int n)
{
	int i, total = 0;
	for (i = 1; i <= n; i++)
	{
		total += i;
	}
	return total;
}