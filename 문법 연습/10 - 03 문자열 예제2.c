#include <stdio.h>

void main(void)
{
	//NULL����('\0')�� ���ԵǾ 12���� ������ �Ҵ�
	char str[] = "Hello World";
	printf("%d\n", sizeof(str));

	//���ڿ��� ������ ���� �ʰ� NULL���� ���θ��� Ȯ��
	for (int i = 0;  str[i] != '\0'; i++)
		printf("%c", str[i]);

	
}