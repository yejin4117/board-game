#include <stdio.h>

void main(void)
{
	// ����, ����, 8����Ʈ�ε��Ҽ� ����
	int a;
	char b;
	double c;

	// �ش� ������ ����Ű�� ������
	int* ptrA = &a;
	char* ptrB = &b;
	double* ptrC = &c;

	// ������ ������ �޸𸮿��� �����ϴ� ũ��
	printf("%d %d %d\n", sizeof(a), sizeof(b), sizeof(c));

	// ������ ������ ������ �޸𸮿��� �����ϴ� ũ��
	printf("%d %d %d\n", sizeof(ptrA), sizeof(ptrB), sizeof(ptrC));
}