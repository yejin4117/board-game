#include <stdio.h>

// �Է¹��� ����(score)�� ���� ����� ���
void cal_grade(int score)
{
	if (90 <= score && score <= 100)
		printf("A");
	else if (80 <= score && score < 90)
		printf("B");
	else if (70 <= score && score < 80)
		printf("C");
	else if (60 <= score && score < 70)
		printf("D");
	else
		printf("E");

	printf("\n");
}

void main(void)
{
	int C_score;
	printf("����� ������ �Է��Ͻÿ� : ");
	scanf("%d", &C_score);

	cal_grade(C_score);


	int java_score;
	printf("�ڹ� ������ �Է��Ͻÿ� : ");
	scanf("%d", &java_score);

	cal_grade(java_score);


	int CA_score;
	printf("��ǻ�ͱ��� ������ �Է��Ͻÿ� : ");
	scanf("%d", &CA_score);

	cal_grade(CA_score);
}