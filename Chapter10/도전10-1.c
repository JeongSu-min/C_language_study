#include <stdio.h>

void input_nums(int* lotto_nums); // 배열에 로또 번호를 입력하는 함수
void print_nums(int* lotto_nums); // 배열에 저장된 값을 출력하는 함수

int main(void)
{
	int lotto_nums[6]; // 로또 번호를 저장할 배열

	input_nums(lotto_nums); // 입력 함수 호출
	print_nums(lotto_nums); // 출력 함수 호출

	return 0;
}

void input_nums(int* lotto_nums)
{
	int i, j;
	for (i = 0; i < 6; i++)
	{
		printf("번호 입력 : ");
		scanf("%d", &lotto_nums[i]);
		for (j = 0; j < i; j++)
		{
			if (lotto_nums[j] == lotto_nums[i])
			{
				printf("같은 번호가 있습니다!\n");
				i--;
			}
		}
	}
}

void print_nums(int* lotto_nums)
{
	int i;
	printf("로또 번호 : ");
	for (i = 0; i < 6; i++)
	{
		printf("%5d", *(lotto_nums + i));
	}
}