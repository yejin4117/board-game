#include<stdio.h>

int main(void)
{
	int score;
	printf("����� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &score);
	if (100 >= score && 90 <= score)
		printf("A\n");
	if (89 >= score && 80 <= score)
		printf("B\n");
	if (79 >= score && 70 <= score)
		printf("C\n");
	if (69 >= score)
		printf("D\n");

	printf("�ڹ� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &score);
	if (100 >= score && 90 <= score)
		printf("A\n");
	if (89 >= score && 80 <= score)
		printf("B\n");
	if (79 >= score && 70 <= score)
		printf("C\n");
	if (69 >= score)
		printf("D\n");

	printf("�ı� ������ �Է��Ͻÿ� : ");
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