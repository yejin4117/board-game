#include <stdio.h>

void main(void) 
{
	//�����Ҵ� (������ �ð��� 16bytes�� ����, stack ������ �Ҵ�Ǵ� ��������)
	int arr[4] = { 10, 20,30, 40 };

	int length = 4;

	//UNUSED : �����Ҵ��� �������ϰ� �����ֱ� ���� �ڵ�
	//printf("�迭�� ���̸� �Է��ϼ��� : ");
	//scanf("%d", &length);

	//����ð��� �޸𸮰� �����Ǵ� �����Ҵ�(heap ����)
	int* ptr = (int*)malloc(length * sizeof(int));

	ptr[0] = 10, ptr[1] = 20, ptr[2] = 30, ptr[3] = 40;
}