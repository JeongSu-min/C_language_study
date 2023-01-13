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

	printf("문장 입력 : ");
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

	printf("바뀐 문장 : %s\n", str);
	printf("바뀐 문자 수 : %d", CL);

	return 0;
}