#include <stdio.h>

int main(void)
{
	int n;
	int pn;

	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &n);

	int i, j; // i는 n이하의 모든 수, j는 2부터 i보다 작은 모든 수
	int cnt = 0; // 한 줄에 5개 들어가게 세주는 변수

	for (i = 2; i <= n; i++) // i는 n이하일 때 까지 아래의 수행을 하고 1씩 커진다
	{
		pn = 1; // 일단 소수라고 가정한다.
		for (j = 2; j < i;j++) // j는 i보다 작을 때 아래의 수행을 하고 1씩 커진다
		{
			if ((i % j) == 0) // i가 j로 나누어질 때 소수가 아니다
			{
				pn = 0;
				break;
			}
		}
		if (pn == 1) // 소수인 경우
		{
			printf("%5d", i); // 5칸 안에 i를 출력
			cnt++; // 카운트 수 1개 늘리기
			if ((cnt % 5) == 0) // 카운트 수가 5로 나누어 떨어지면 한 줄 내리기
			{
				printf("\n");
			}
		}
	}

	return 0;
}