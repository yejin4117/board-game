#include <stdio.h>

void cal_grade(int score);
float average(int a, int b, int c);

void main(void)
{
	float avg;		//���
	int subject[3];	//����

	printf("����� ������ �Է��Ͻÿ� : ");
	scanf("%d", &subject[0]);
	cal_grade(subject[0]);

	printf("�ڹ� ������ �Է��Ͻÿ� : ");
	scanf("%d", &subject[1]);
	cal_grade(subject[1]);

	printf("��ǻ�ͱ��� ������ �Է��Ͻÿ� : ");
	scanf("%d", &subject[2]);
	cal_grade(subject[2]);

	avg = average(subject[0], subject[1], subject[2]);
	printf("�� ������ ����� %f�Դϴ�\n", avg);
}

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

// �� ������ ����� ��ȯ
float average(int a, int b, int c)
{
	return (a + b + c) / 3.f;
}