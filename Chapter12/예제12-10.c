#include <stdio.h>
#include <string.h> // strcat, strncat 함수를 사용하기 위해 인클루드함

int main(void)
{
	char str[80] = "straw"; // 문자열 초기화

	strcat(str, "berry"); // str 배열에 문자열 붙이기
	printf("%s\n", str);
	strncat(str, "piece", 3); // str 배열에 3개의 문자 붙이기
	printf("%s\n", str);

	return 0;
}