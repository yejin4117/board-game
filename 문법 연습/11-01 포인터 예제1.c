#include <stdio.h>

void main(void)
{
	int num = 3;
	int* ptr = &num;

	printf("num�ȿ� ����ִ� �� %p \n", num);
	printf("num�� �޸� �ּҰ� %p \n", &num);
	printf("ptr�ȿ� ����ִ� �� %p \n", ptr);
}