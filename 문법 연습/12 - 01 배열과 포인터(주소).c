#include<stdio.h>

void main(void)
{
	int arr[4];
	printf("0��° ������ �ּ� : %p\n", &arr[0]);
	printf("�迭�� ���� �ּ� : %p\n", arr);
	printf("0��° ������ �ּ� : %p\n\n", &arr[1]);


	char str[4];
	printf("0��° ������ �ּ� : %p\n", &str[0]);
	printf("�迭�� ���� �ּ� : %p\n", str);
	printf("0��° ������ �ּ� : %p\n", &str[1]);

}