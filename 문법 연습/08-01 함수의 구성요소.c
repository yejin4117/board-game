#include<stdio.h>

//�� ���� ���ڸ� ���ؼ� ��ȯ�ϴ� �Լ�
int sum(int num1, int num2)
{
	return num1 + num2;
}

void main(void)
{
	int c;
	c = sum(1, 2);
	printf("%d\n", c);
}