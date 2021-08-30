#include<stdio.h>

	int main(void)
{
	int score;
	printf("점수를 입력하시오 : ");
	scanf_s("%d", &score);

	if (100 >= score && 90 <= score)
		printf("A");
	if (89 >= score && 80 <= score)
		printf("B");
	if (79 >= score && 70 <= score)
		printf("C");
	if (69 >= score)
		printf("D");

	return 0;
}
