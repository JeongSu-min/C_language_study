#include <stdio.h>

int main(void)
{
	char str[80];
	char CAP[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char SMO[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;
	int count;
	int CL=0;

	printf("���� �Է� : ");
	gets(str);
	
	count = sizeof(str) / sizeof(str[0]);

	for (i = 0; i < count; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (str[i] == CAP[j])
			{
				str[i] = SMO[j];
				CL += 1;
			}
		}
	}

	printf("�ٲ� ���� : %s\n", str);
	printf("�ٲ� ���� �� : %d", CL);

	return 0;
}