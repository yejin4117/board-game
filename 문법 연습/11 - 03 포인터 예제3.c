#include <stdio.h>

void main(void)
{
	int num1 = 3, num2 = 30;
	printf("num1 �ȿ� ����ִ� �� %d\n", num1);
	printf("num2 �ȿ� ����ִ� �� %d\n\n", num2);

	// ptr�� num1�� ����Ŵ(int* ptr = &num1;)
	int* ptr;
	ptr = &num1;

	*ptr = 4;
	//ptr�� num2�� ����Ŵ
	*ptr = &num2;
	*ptr = 4;
	ptr = &num2;
	*ptr = 40;
}