#include <stdio.h>

void main(void)
{
	int i = 1;
	char c = 2;
	double d = 3.0;

	int* pi = &i;
	char* pc = &c;
	double* pd = &d;

	//pi : i(4����Ʈ�� ����)�� �ּ�
	//pc : c(1����Ʈ�� ����)�� �ּ�
	//pd : d(8����Ʈ�� ����)�� �ּ�
	printf("%p %p %p \n", pi, pc, pd);
	//i,c,d ������ ũ�⸸ŭ ����
	printf("%p %p %p \n", pi + 1, pc + 1, pd + 1);
	printf("%p %p %p \n", &i + 1, &c + 1, &d + 1);
}