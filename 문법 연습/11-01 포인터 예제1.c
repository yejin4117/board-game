#include <stdio.h>

void main(void)
{
	int num = 3;
	int* ptr = &num;

	printf("num�ȿ� ����ִ� �� %d \n", num);
	printf("num�� �޸� �ּҰ� %d \n", &num);
	printf("ptr�ȿ� ����ִ� �� %d \n", ptr);
}