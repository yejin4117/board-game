#include <stdio.h>

// stack������ ������ ��� �Ҵ�Ǵٰ� �Լ��� ������ �����
void local_increase(void)
{
	int a = 0;
	printf("�������� %d\n", a);
	a++;
}

void main(void)
{
	for (int i = 1; i <= 5; i++) {
		local_increase();
	}
}