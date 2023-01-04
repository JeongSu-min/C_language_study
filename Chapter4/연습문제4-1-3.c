#include <stdio.h>

int main(void)
{
	int kor = 3, eng = 5, mat = 4;
	int credits;
	int res;
	double kscore = 3.8, escore = 4.4, mscore = 3.9;
	double grade;

	credits = kor + eng + mat;
	grade = ((kscore * 3) + (escore * 5) + (mscore * 4)) / credits;
	res = (credits >= 10) && (grade > 4.0);
	
	printf("%d", res);

	return 0;
}