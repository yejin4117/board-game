#include <stdio.h>

void main(void) 
{
	//�����Ҵ� (������ �ð��� 16bytes�� ����)
	int arr[4] = { 10, 20,30, 40 };

	int length;
	printf("�迭�� ���̸� �Է��ϼ��� : ");
	scanf("%d", &length);

	//����ð��� �޸𸮰� �����Ǵ� �����Ҵ�
	void* ptr = malloc(length);
}