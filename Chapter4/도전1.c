#include <stdio.h>

int main(void)
{
	double weight, height, BMI;
	int res;

	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%lf %lf", &weight, &height);
	BMI = (weight) / (height * height);
	res = (BMI >= 20.0) && (BMI < 25.0);

	printf("%s\n", (res == 1) ? "ǥ���Դϴ�." : "ü�߰����� �ʿ��մϴ�.");

	return 0;
}