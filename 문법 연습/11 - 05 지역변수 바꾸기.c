#include <stdio.h>

void changeA(int num);

void main(void)
{
	int A = 3;
	printf("�ٲٱ� �� %d\n", A);
	// �Լ��� argument�� A�� �ּҰ��� �ѱ�
	// ���� A ��ü�� �ѱ�°��� �ƴϴ�.
	changeA(A);
	printf("�ٲٱ� �� %d\n", A);
}

void changeA(int num)
{
	num = 5;
}