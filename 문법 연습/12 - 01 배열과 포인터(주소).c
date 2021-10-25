#include<stdio.h>

void main(void)
{
	int arr[4];
	printf("0번째 공간의 주소 : %p\n", &arr[0]);
	printf("배열의 시작 주소 : %p\n", arr);
	printf("0번째 공간의 주소 : %p\n\n", &arr[1]);


	char str[4];
	printf("0번째 공간의 주소 : %p\n", &str[0]);
	printf("배열의 시작 주소 : %p\n", str);
	printf("0번째 공간의 주소 : %p\n", &str[1]);

}