#include <stdio.h>

int main(void)
{
	int a, b, res;
	char cal;
	
	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d", &a, &cal, &b);

	if (cal == '+')
	{
		res = a + b;
	}
	if (cal == '-')
	{
		res = a - b;
	}
	if (cal == '*')
	{
		res = a * b;
	}
	if (cal == '/')
	{
		res = a / b;
	}

	printf("%d%c%d=%d", a, cal, b, res);

	return 0;
}