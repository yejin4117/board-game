#include<stdio.h>

int main(void)
{
	int score;
	printf("씨언어 점수를 입력하시오 : ");
	scanf_s("%d", &score);
	if (100 >= score && 90 <= score)
		printf("A\n");
	if (89 >= score && 80 <= score)
		printf("B\n");
	if (79 >= score && 70 <= score)
		printf("C\n");
	if (69 >= score)
		printf("D\n");

	printf("자바 점수를 입력하시오 : ");
	scanf_s("%d", &score);
	if (100 >= score && 90 <= score)
		printf("A\n");
	if (89 >= score && 80 <= score)
		printf("B\n");
	if (79 >= score && 70 <= score)
		printf("C\n");
	if (69 >= score)
		printf("D\n");

	printf("컴구 점수를 입력하시오 : ");
	scanf_s("%d", &score);
	if (100 >= score && 90 <= score)
		printf("A\n");
	if (89 >= score && 80 <= score)
		printf("B\n");
	if (79 >= score && 70 <= score)
		printf("C\n");
	if (69 >= score)
		printf("D\n");

	return 0;
}