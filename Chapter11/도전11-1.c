#include <stdio.h>

int main(void)
{
	int res, cnt = 0, max = 0, temp = 0;
	char ch;

	while (1)
	{
		ch = getchar();
		res = ch;
		if (res == -1) break;

		while (ch != '\n')
		{
			cnt += 1;
			ch = getchar();
		}

		temp = cnt;

		if (max < temp)
		{
			max = temp;
		}

		cnt = 0;
	}

	printf("���� �� �ܾ��� ���� : %d", max);

	return 0;
}