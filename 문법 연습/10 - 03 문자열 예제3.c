#include <stdio.h>

void main(void)
{
	char str[20] = "Hello World";
		
	// 'W'  ������ �ι��ڸ� �־ �ι��ڸ� ����
	str[7] = '\0';
	printf("%s\n", str);
}