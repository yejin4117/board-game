#include <stdio.h>

void Swap(void);

void main(void) 
{
	int a = 10, b = 20;
	printf("�ٲٱ� �� a:%d b: %d\n", a, b);
	Swap(&a,&b);
	printf("�ٲٱ� �� a:%d b: %d\n", a, b);
}

//�� ������ �ٲ�
void Swap(int* num1, int* num2)
{
	int temp;
	temp = *num1;	//�ӽ� �����
	*num1 = *num2;
	*num2 = temp;
}
