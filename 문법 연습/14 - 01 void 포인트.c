#include<stdio.h>

void main(void) 
{
	int num = 3;
	int* ptr = &num;
	void* vptr = &num;

	//num�� �ּҰ�
	printf("%p %p %p \n", &num, ptr, vptr);
	//3�� ���
	printf("%d %d \n", num, *ptr);
	//void* �ڷ����� ���ΰ��� �� �� ����(������ �Ұ�)
	//printf(%d \n", *vptr);
}